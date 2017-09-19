/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace cpp2 {
MyServiceClientWrapper::MyServiceClientWrapper(
    std::shared_ptr<cpp2::MyServiceAsyncClient> async_client) : 
    async_client(async_client) {}

MyServiceClientWrapper::~MyServiceClientWrapper() {}

folly::Future<folly::Unit> MyServiceClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { disconnectInLoop(); });
}

void MyServiceClientWrapper::disconnectInLoop() {
    async_client.reset();
}

void MyServiceClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
MyServiceClientWrapper::ping() {
 return async_client->future_ping(
 );
}

folly::Future<std::string>
MyServiceClientWrapper::getRandomData() {
 return async_client->future_getRandomData(
 );
}

folly::Future<bool>
MyServiceClientWrapper::hasDataById(
    int64_t arg_id) {
 return async_client->future_hasDataById(
   arg_id
 );
}

folly::Future<std::string>
MyServiceClientWrapper::getDataById(
    int64_t arg_id) {
 return async_client->future_getDataById(
   arg_id
 );
}

folly::Future<folly::Unit>
MyServiceClientWrapper::putDataById(
    int64_t arg_id, 
    std::string arg_data) {
 return async_client->future_putDataById(
   arg_id,
   arg_data
 );
}

folly::Future<folly::Unit>
MyServiceClientWrapper::lobDataById(
    int64_t arg_id, 
    std::string arg_data) {
 return async_client->future_lobDataById(
   arg_id,
   arg_data
 );
}


MyServiceFastClientWrapper::MyServiceFastClientWrapper(
    std::shared_ptr<cpp2::MyServiceFastAsyncClient> async_client) : 
    async_client(async_client) {}

MyServiceFastClientWrapper::~MyServiceFastClientWrapper() {}

folly::Future<folly::Unit> MyServiceFastClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { disconnectInLoop(); });
}

void MyServiceFastClientWrapper::disconnectInLoop() {
    async_client.reset();
}

void MyServiceFastClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
MyServiceFastClientWrapper::ping() {
 return async_client->future_ping(
 );
}

folly::Future<std::string>
MyServiceFastClientWrapper::getRandomData() {
 return async_client->future_getRandomData(
 );
}

folly::Future<bool>
MyServiceFastClientWrapper::hasDataById(
    int64_t arg_id) {
 return async_client->future_hasDataById(
   arg_id
 );
}

folly::Future<std::string>
MyServiceFastClientWrapper::getDataById(
    int64_t arg_id) {
 return async_client->future_getDataById(
   arg_id
 );
}

folly::Future<folly::Unit>
MyServiceFastClientWrapper::putDataById(
    int64_t arg_id, 
    std::string arg_data) {
 return async_client->future_putDataById(
   arg_id,
   arg_data
 );
}

folly::Future<folly::Unit>
MyServiceFastClientWrapper::lobDataById(
    int64_t arg_id, 
    std::string arg_data) {
 return async_client->future_lobDataById(
   arg_id,
   arg_data
 );
}


MyServiceEmptyClientWrapper::MyServiceEmptyClientWrapper(
    std::shared_ptr<cpp2::MyServiceEmptyAsyncClient> async_client) : 
    async_client(async_client) {}

MyServiceEmptyClientWrapper::~MyServiceEmptyClientWrapper() {}

folly::Future<folly::Unit> MyServiceEmptyClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { disconnectInLoop(); });
}

void MyServiceEmptyClientWrapper::disconnectInLoop() {
    async_client.reset();
}

void MyServiceEmptyClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}



MyServicePrioParentClientWrapper::MyServicePrioParentClientWrapper(
    std::shared_ptr<cpp2::MyServicePrioParentAsyncClient> async_client) : 
    async_client(async_client) {}

MyServicePrioParentClientWrapper::~MyServicePrioParentClientWrapper() {}

folly::Future<folly::Unit> MyServicePrioParentClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { disconnectInLoop(); });
}

void MyServicePrioParentClientWrapper::disconnectInLoop() {
    async_client.reset();
}

void MyServicePrioParentClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
MyServicePrioParentClientWrapper::ping() {
 return async_client->future_ping(
 );
}

folly::Future<folly::Unit>
MyServicePrioParentClientWrapper::pong() {
 return async_client->future_pong(
 );
}


MyServicePrioChildClientWrapper::MyServicePrioChildClientWrapper(
    std::shared_ptr<cpp2::MyServicePrioChildAsyncClient> async_client) : 
    MyServicePrioParentClientWrapper(async_client),
    async_client(async_client) {}


folly::Future<folly::Unit> MyServicePrioChildClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { disconnectInLoop(); });
}

void MyServicePrioChildClientWrapper::disconnectInLoop() {
    async_client.reset();
    cpp2::MyServicePrioParentClientWrapper::disconnectInLoop();
}



folly::Future<folly::Unit>
MyServicePrioChildClientWrapper::pang() {
 return async_client->future_pang(
 );
}


} // namespace cpp2
