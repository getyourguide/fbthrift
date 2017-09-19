/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "src/gen-cpp2/module_types.h"
#include <yarpl/Flowable.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class PubSubStreamingServiceSvAsyncIf {
 public:
  virtual ~PubSubStreamingServiceSvAsyncIf() {}
  virtual void async_tm_client(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual folly::Future<folly::Unit> future_client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual void async_tm_server(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual folly::Future<folly::Unit> future_server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual void async_tm_both(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual folly::Future<folly::Unit> future_both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) = 0;
  virtual void async_tm_returnstream(std::unique_ptr<apache::thrift::PubsubHandlerCallback<int32_t>> callback, int32_t i32_from, int32_t i32_to) = 0;
  virtual void async_tm_takesstream(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) = 0;
  virtual folly::Future<folly::Unit> future_takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) = 0;
  virtual void async_tm_clientthrows(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) = 0;
  virtual folly::Future<folly::Unit> future_clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) = 0;
};

class PubSubStreamingServiceAsyncProcessor;

class PubSubStreamingServiceSvIf : public PubSubStreamingServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef PubSubStreamingServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/);
  folly::Future<folly::Unit> future_client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  void async_tm_client(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  virtual void server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/);
  folly::Future<folly::Unit> future_server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  void async_tm_server(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  virtual void both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/);
  folly::Future<folly::Unit> future_both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  void async_tm_both(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) override;
  virtual yarpl::Reference<yarpl::flowable::Flowable<int32_t>> returnstream(int32_t /*i32_from*/, int32_t /*i32_to*/);
  virtual void takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*instream*/, int32_t /*other_param*/);
  folly::Future<folly::Unit> future_takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) override;
  void async_tm_takesstream(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) override;
  virtual void clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foostream*/);
  folly::Future<folly::Unit> future_clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) override;
  void async_tm_clientthrows(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) override;
};

class PubSubStreamingServiceSvNull : public PubSubStreamingServiceSvIf {
 public:
  void client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) override;
  void server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) override;
  void both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) override;
  yarpl::Reference<yarpl::flowable::Flowable<int32_t>> returnstream(int32_t /*i32_from*/, int32_t /*i32_to*/) override;
  void takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*instream*/, int32_t /*other_param*/) override;
  void clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foostream*/) override;
};

class PubSubStreamingServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
  using HasFrozen2 = std::false_type;
 protected:
  PubSubStreamingServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<PubSubStreamingServiceAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const PubSubStreamingServiceAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const PubSubStreamingServiceAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<PubSubStreamingServiceAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const PubSubStreamingServiceAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const PubSubStreamingServiceAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_client(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_client(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_client(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_client(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_server(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_server(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_server(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_server(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_both(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_both(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_both(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_both(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_returnstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_takesstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_clientthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_clientthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_clientthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_clientthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  PubSubStreamingServiceAsyncProcessor(PubSubStreamingServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~PubSubStreamingServiceAsyncProcessor() {}
};

class PubSubStreamingServiceAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~PubSubStreamingServiceAsyncClient() {}

  PubSubStreamingServiceAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext);
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }

  apache::thrift::HeaderChannel*  getHeaderChannel() {
    return dynamic_cast<apache::thrift::HeaderChannel*>(this->channel_.get());
  }
  virtual void client(std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void client(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
 private:
  virtual void clientImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
 public:
  virtual void sync_client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void sync_client(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<folly::Unit> future_client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<folly::Unit> future_client(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_client(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void client(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  static folly::exception_wrapper recv_wrapped_client(::apache::thrift::ClientReceiveState& state);
  static void recv_client(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_client(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_client(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void clientT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_clientT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_clientT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void server(std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void server(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
 private:
  virtual void serverImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
 public:
  virtual void sync_server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void sync_server(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<folly::Unit> future_server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<folly::Unit> future_server(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_server(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void server(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  static folly::exception_wrapper recv_wrapped_server(::apache::thrift::ClientReceiveState& state);
  static void recv_server(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_server(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_server(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void serverT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_serverT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_serverT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void both(std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void both(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
 private:
  virtual void bothImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
 public:
  virtual void sync_both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void sync_both(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<folly::Unit> future_both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<folly::Unit> future_both(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_both(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  virtual void both(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  static folly::exception_wrapper recv_wrapped_both(::apache::thrift::ClientReceiveState& state);
  static void recv_both(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_both(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_both(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void bothT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_bothT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_bothT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void returnstream(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
  virtual void returnstream(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 private:
  virtual void returnstreamImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 public:
  virtual yarpl::Reference<yarpl::flowable::Flowable<int32_t>> returnstream(int32_t i32_from, int32_t i32_to);
  virtual yarpl::Reference<yarpl::flowable::Flowable<int32_t>> returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
  static folly::exception_wrapper recv_wrapped_returnstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>>& _return, ::apache::thrift::ClientReceiveState& state);
  static yarpl::Reference<yarpl::flowable::Flowable<int32_t>> recv_returnstream(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual yarpl::Reference<yarpl::flowable::Flowable<int32_t>> recv_instance_returnstream(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_returnstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>>& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void returnstreamT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_returnstreamT(Protocol_* prot, yarpl::Reference<yarpl::flowable::Flowable<int32_t>>& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static yarpl::Reference<yarpl::flowable::Flowable<int32_t>> recv_returnstreamT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void takesstream(std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
  virtual void takesstream(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
 private:
  virtual void takesstreamImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
 public:
  virtual void sync_takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
  virtual void sync_takesstream(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
  virtual folly::Future<folly::Unit> future_takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
  virtual folly::Future<folly::Unit> future_takesstream(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_takesstream(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
  virtual void takesstream(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
  static folly::exception_wrapper recv_wrapped_takesstream(::apache::thrift::ClientReceiveState& state);
  static void recv_takesstream(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_takesstream(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_takesstream(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void takesstreamT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_takesstreamT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_takesstreamT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void clientthrows(std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
  virtual void clientthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
 private:
  virtual void clientthrowsImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
 public:
  virtual void sync_clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
  virtual void sync_clientthrows(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
  virtual folly::Future<folly::Unit> future_clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
  virtual folly::Future<folly::Unit> future_clientthrows(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_clientthrows(apache::thrift::RpcOptions& rpcOptions, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
  virtual void clientthrows(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
  static folly::exception_wrapper recv_wrapped_clientthrows(::apache::thrift::ClientReceiveState& state);
  static void recv_clientthrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_clientthrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_clientthrows(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void clientthrowsT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_clientthrowsT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_clientthrowsT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
 protected:
  std::unique_ptr<apache::thrift::Cpp2ConnContext> connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
