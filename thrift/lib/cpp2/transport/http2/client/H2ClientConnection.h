/*
 * Copyright 2017-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <thrift/lib/cpp2/transport/core/ClientConnectionIf.h>

#include <proxygen/lib/http/codec/HTTPCodec.h>
#include <proxygen/lib/http/session/HTTPUpstreamSession.h>
#include <thrift/lib/cpp2/transport/http2/common/H2ChannelIf.h>
#include <chrono>
#include <string>

namespace apache {
namespace thrift {

/**
 * HTTP/2 implementation of ClientConnectionIf.
 *
 * Static methods are provided to create HTTP1 or HTTP2 connections.
 * These methods optionally take a host and url parameter.  Some
 * servers will only work with specific values for these.  If these
 * parameters are not set, the implementation will use the most
 * efficient possible setting for these values.
 *
 * Host and url values can only be specified at connection creation
 * time - i.e., you cannot use different values (for url) for
 * different RPCs.
 *
 * This class maintains a nested Proxygen connection
 * (HTTPUpstreamSession).  If the Proxygen connection dies, we do not
 * attempt to recreate it, instead we pass this error to the callers.
 * In the future, we may change this (for now callers have to create a
 * new H2ClientConnection object and discard the old one).
 */
class H2ClientConnection : public ClientConnectionIf,
                           public proxygen::HTTPSession::InfoCallback {
 public:
  static std::unique_ptr<ClientConnectionIf> newHTTP1xConnection(
      async::TAsyncTransport::UniquePtr transport,
      const std::string& httpHost = "",
      const std::string& httpUrl = "/");

  static std::unique_ptr<ClientConnectionIf> newHTTP2Connection(
      async::TAsyncTransport::UniquePtr transport,
      const std::string& httpHost = "",
      const std::string& httpUrl = "/");

  virtual ~H2ClientConnection() override;

  H2ClientConnection(const H2ClientConnection&) = delete;
  H2ClientConnection& operator=(const H2ClientConnection&) = delete;

  std::shared_ptr<ThriftChannelIf> getChannel() override;
  void setMaxPendingRequests(uint32_t num) override;
  folly::EventBase* getEventBase() const override;

  // Returns a new transaction that is bound to the channel parameter.
  // Throws TTransportException if unable to create a new transaction.
  proxygen::HTTPTransaction* newTransaction(H2ChannelIf* channel);

  apache::thrift::async::TAsyncTransport* getTransport() override;
  bool good() override;
  ClientChannel::SaturationStatus getSaturationStatus() override;
  void attachEventBase(folly::EventBase* evb) override;
  void detachEventBase() override;
  bool isDetachable() override;
  bool isSecurityActive() override;
  uint32_t getTimeout() override;
  void setTimeout(uint32_t ms) override;
  void closeNow() override;
  CLIENT_TYPE getClientType() override;

  // begin HTTPSession::InfoCallback methods

  void onDestroy(const proxygen::HTTPSession&) override;

  // Remaining methods have trivial implementations
  void onCreate(const proxygen::HTTPSession&) override {}
  void onIngressError(const proxygen::HTTPSession&, proxygen::ProxygenError)
      override {}
  void onIngressEOF() override {}
  void onRead(const proxygen::HTTPSession&, size_t) override {}
  void onWrite(const proxygen::HTTPSession&, size_t) override {}
  void onRequestBegin(const proxygen::HTTPSession&) override {}
  void onRequestEnd(const proxygen::HTTPSession&, uint32_t) override {}
  void onActivateConnection(const proxygen::HTTPSession&) override {}
  void onDeactivateConnection(const proxygen::HTTPSession&) override {}
  void onIngressMessage(
      const proxygen::HTTPSession&,
      const proxygen::HTTPMessage&) override {}
  void onIngressLimitExceeded(const proxygen::HTTPSession&) override {}
  void onIngressPaused(const proxygen::HTTPSession&) override {}
  void onTransactionDetached(const proxygen::HTTPSession&) override {}
  void onPingReplySent(int64_t) override {}
  void onPingReplyReceived() override {}
  void onSettingsOutgoingStreamsFull(const proxygen::HTTPSession&) override {}
  void onSettingsOutgoingStreamsNotFull(const proxygen::HTTPSession&) override {
  }
  void onFlowControlWindowClosed(const proxygen::HTTPSession&) override {}
  void onEgressBuffered(const proxygen::HTTPSession&) override {}
  void onEgressBufferCleared(const proxygen::HTTPSession&) override {}

  // end HTTPSession::InfoCallback methods

 private:
  static const std::chrono::milliseconds kDefaultTransactionTimeout;

  H2ClientConnection(
      async::TAsyncTransport::UniquePtr transport,
      std::unique_ptr<proxygen::HTTPCodec> codec);

  proxygen::HTTPUpstreamSession* httpSession_;
  folly::EventBase* evb_{nullptr};
  std::string httpHost_;
  std::string httpUrl_;
  std::chrono::milliseconds timeout_{kDefaultTransactionTimeout};
};

} // namespace thrift
} // namespace apache
