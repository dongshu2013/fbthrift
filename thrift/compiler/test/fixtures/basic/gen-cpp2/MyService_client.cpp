/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MyService.h"

#include "MyService.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

const char* MyServiceAsyncClient::getServiceName() {
  return "MyService";
}

void MyServiceAsyncClient::ping(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  ping(rpcOptions, std::move(callback));
}

void MyServiceAsyncClient::ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      pingT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      pingT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_ping(rpcOptions);
}

void MyServiceAsyncClient::sync_ping(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback0 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  ping(rpcOptions, std::move(callback0));
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_ping(_returnState);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_ping(rpcOptions);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_ping(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> promise1;
  auto future2 = promise1.getFuture();
  auto callback3 = folly::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise1), recv_wrapped_ping, channel_);
  ping(rpcOptions, std::move(callback3));
  return future2;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_ping(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise4;
  auto future5 = promise4.getFuture();
  auto callback6 = folly::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise4), recv_wrapped_ping, channel_);
  ping(rpcOptions, std::move(callback6));
  return future5;
}

void MyServiceAsyncClient::ping(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  ping(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_ping(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_pingT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_pingT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_ping(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_ping(state);
  if (ew) {
    ew.throwException();
  }
}

void MyServiceAsyncClient::recv_instance_ping(::apache::thrift::ClientReceiveState& state) {
  recv_ping(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_ping(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_ping(state);
}

void MyServiceAsyncClient::getRandomData(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  getRandomData(rpcOptions, std::move(callback));
}

void MyServiceAsyncClient::getRandomData(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      getRandomDataT(&writer, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      getRandomDataT(&writer, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_getRandomData(std::string& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_getRandomData(rpcOptions, _return);
}

void MyServiceAsyncClient::sync_getRandomData(apache::thrift::RpcOptions& rpcOptions, std::string& _return) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback7 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  getRandomData(rpcOptions, std::move(callback7));
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_getRandomData(_return, _returnState);
}

folly::Future<std::string> MyServiceAsyncClient::future_getRandomData() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_getRandomData(rpcOptions);
}

folly::Future<std::string> MyServiceAsyncClient::future_getRandomData(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::string> promise8;
  auto future9 = promise8.getFuture();
  auto callback10 = folly::make_unique<apache::thrift::FutureCallback<std::string>>(std::move(promise8), recv_wrapped_getRandomData, channel_);
  getRandomData(rpcOptions, std::move(callback10));
  return future9;
}

folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_getRandomData(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> promise11;
  auto future12 = promise11.getFuture();
  auto callback13 = folly::make_unique<apache::thrift::HeaderFutureCallback<std::string>>(std::move(promise11), recv_wrapped_getRandomData, channel_);
  getRandomData(rpcOptions, std::move(callback13));
  return future12;
}

void MyServiceAsyncClient::getRandomData(std::function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  getRandomData(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_getRandomData(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_getRandomDataT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_getRandomDataT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_getRandomData(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getRandomData(_return, state);
  if (ew) {
    ew.throwException();
  }
}

void MyServiceAsyncClient::recv_instance_getRandomData(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_getRandomData(_return, state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_getRandomData(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_getRandomData(_return, state);
}

void MyServiceAsyncClient::hasDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  hasDataById(rpcOptions, std::move(callback), id);
}

void MyServiceAsyncClient::hasDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      hasDataByIdT(&writer, rpcOptions, std::move(callback), id);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      hasDataByIdT(&writer, rpcOptions, std::move(callback), id);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

bool MyServiceAsyncClient::sync_hasDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_hasDataById(rpcOptions, id);
}

bool MyServiceAsyncClient::sync_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback14 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  hasDataById(rpcOptions, std::move(callback14), id);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  return recv_hasDataById(_returnState);
}

folly::Future<bool> MyServiceAsyncClient::future_hasDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_hasDataById(rpcOptions, id);
}

folly::Future<bool> MyServiceAsyncClient::future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<bool> promise15;
  auto future16 = promise15.getFuture();
  auto callback17 = folly::make_unique<apache::thrift::FutureCallback<bool>>(std::move(promise15), recv_wrapped_hasDataById, channel_);
  hasDataById(rpcOptions, std::move(callback17), id);
  return future16;
}

folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> promise18;
  auto future19 = promise18.getFuture();
  auto callback20 = folly::make_unique<apache::thrift::HeaderFutureCallback<bool>>(std::move(promise18), recv_wrapped_hasDataById, channel_);
  hasDataById(rpcOptions, std::move(callback20), id);
  return future19;
}

void MyServiceAsyncClient::hasDataById(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id) {
  hasDataById(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),id);
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_hasDataByIdT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_hasDataByIdT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

bool MyServiceAsyncClient::recv_hasDataById(::apache::thrift::ClientReceiveState& state) {
  bool _return;
  auto ew = recv_wrapped_hasDataById(_return, state);
  if (ew) {
    ew.throwException();
  }
  return _return;
}

bool MyServiceAsyncClient::recv_instance_hasDataById(::apache::thrift::ClientReceiveState& state) {
  return recv_hasDataById(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_hasDataById(_return, state);
}

void MyServiceAsyncClient::getDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  getDataById(rpcOptions, std::move(callback), id);
}

void MyServiceAsyncClient::getDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      getDataByIdT(&writer, rpcOptions, std::move(callback), id);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      getDataByIdT(&writer, rpcOptions, std::move(callback), id);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_getDataById(std::string& _return, int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_getDataById(rpcOptions, _return, id);
}

void MyServiceAsyncClient::sync_getDataById(apache::thrift::RpcOptions& rpcOptions, std::string& _return, int64_t id) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback21 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  getDataById(rpcOptions, std::move(callback21), id);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_getDataById(_return, _returnState);
}

folly::Future<std::string> MyServiceAsyncClient::future_getDataById(int64_t id) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_getDataById(rpcOptions, id);
}

folly::Future<std::string> MyServiceAsyncClient::future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<std::string> promise22;
  auto future23 = promise22.getFuture();
  auto callback24 = folly::make_unique<apache::thrift::FutureCallback<std::string>>(std::move(promise22), recv_wrapped_getDataById, channel_);
  getDataById(rpcOptions, std::move(callback24), id);
  return future23;
}

folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id) {
  folly::Promise<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> promise25;
  auto future26 = promise25.getFuture();
  auto callback27 = folly::make_unique<apache::thrift::HeaderFutureCallback<std::string>>(std::move(promise25), recv_wrapped_getDataById, channel_);
  getDataById(rpcOptions, std::move(callback27), id);
  return future26;
}

void MyServiceAsyncClient::getDataById(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id) {
  getDataById(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),id);
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_getDataByIdT(&reader, _return, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_getDataByIdT(&reader, _return, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getDataById(_return, state);
  if (ew) {
    ew.throwException();
  }
}

void MyServiceAsyncClient::recv_instance_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_getDataById(_return, state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_getDataById(std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_getDataById(_return, state);
}

void MyServiceAsyncClient::putDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  putDataById(rpcOptions, std::move(callback), id, data);
}

void MyServiceAsyncClient::putDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      putDataByIdT(&writer, rpcOptions, std::move(callback), id, data);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      putDataByIdT(&writer, rpcOptions, std::move(callback), id, data);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_putDataById(int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_putDataById(rpcOptions, id, data);
}

void MyServiceAsyncClient::sync_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback28 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  putDataById(rpcOptions, std::move(callback28), id, data);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_putDataById(_returnState);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_putDataById(int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_putDataById(rpcOptions, id, data);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  folly::Promise<folly::Unit> promise29;
  auto future30 = promise29.getFuture();
  auto callback31 = folly::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise29), recv_wrapped_putDataById, channel_);
  putDataById(rpcOptions, std::move(callback31), id, data);
  return future30;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise32;
  auto future33 = promise32.getFuture();
  auto callback34 = folly::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise32), recv_wrapped_putDataById, channel_);
  putDataById(rpcOptions, std::move(callback34), id, data);
  return future33;
}

void MyServiceAsyncClient::putDataById(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const std::string& data) {
  putDataById(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),id,data);
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_putDataById(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_putDataByIdT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_putDataByIdT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_putDataById(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_putDataById(state);
  if (ew) {
    ew.throwException();
  }
}

void MyServiceAsyncClient::recv_instance_putDataById(::apache::thrift::ClientReceiveState& state) {
  recv_putDataById(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_putDataById(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_putDataById(state);
}

void MyServiceAsyncClient::lobDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  lobDataById(rpcOptions, std::move(callback), id, data);
}

void MyServiceAsyncClient::lobDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const std::string& data) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      lobDataByIdT(&writer, rpcOptions, std::move(callback), id, data);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      lobDataByIdT(&writer, rpcOptions, std::move(callback), id, data);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_lobDataById(int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_lobDataById(rpcOptions, id, data);
}

void MyServiceAsyncClient::sync_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback35 = folly::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), true);
  lobDataById(rpcOptions, std::move(callback35), id, data);
  getChannel()->getEventBase()->loopForever();
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_lobDataById(int64_t id, const std::string& data) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_lobDataById(rpcOptions, id, data);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const std::string& data) {
  folly::Promise<folly::Unit> promise36;
  auto future37 = promise36.getFuture();
  auto callback38 = folly::make_unique<apache::thrift::OneWayFutureCallback>(std::move(promise36), channel_);
  lobDataById(rpcOptions, std::move(callback38), id, data);
  return future37;
}

void MyServiceAsyncClient::lobDataById(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const std::string& data) {
  lobDataById(folly::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)),id,data);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift