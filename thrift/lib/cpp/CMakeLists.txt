add_library(
  concurrency

  concurrency/Mutex.cpp
  concurrency/Monitor.cpp
  concurrency/PosixThreadFactory.cpp
  concurrency/ProfiledMutex.cpp
  concurrency/ThreadManager.cpp
  concurrency/TimerManager.cpp
  concurrency/Util.cpp
)

bypass_source_check("${reflection-cpp-SOURCES}")
add_library(
  protocol

  protocol/TDebugProtocol.cpp
  protocol/TJSONProtocol.cpp
  protocol/TBase64Utils.cpp
  protocol/TProtocolException.cpp
  protocol/TSimpleJSONProtocol.cpp
  ${reflection-cpp-SOURCES}
)
add_dependencies(protocol reflection-cpp-target)

add_library(
  transport

  transport/TTransportException.cpp
  transport/TFDTransport.cpp
  transport/TSimpleFileTransport.cpp
  transport/THeaderTransport.cpp
  transport/THttpTransport.cpp
  transport/THttpClient.cpp
  transport/THttpServer.cpp
  transport/TSocket.cpp
  transport/TSSLSocket.cpp
  transport/TSocketOverHttpTunnel.cpp
  transport/TSocketPool.cpp
  transport/TServerSocket.cpp
  transport/TSSLServerSocket.cpp
  transport/TBufferTransports.cpp
  transport/THeader.cpp
  transport/TZlibTransport.cpp
)

target_link_libraries(
  transport

  ${ZSTD_LIBRARIES}
)

add_library(
  async

  async/TAsyncSocketFactory.cpp
  async/TAsyncSSLSocketFactory.cpp
  async/TBinaryAsyncChannel.cpp
  async/TEventConnection.cpp
  async/TEventServer.cpp
  async/TEventTask.cpp
  async/TEventWorker.cpp
  async/TFramedAsyncChannel.cpp
  async/THeaderAsyncChannel.cpp
  async/THttpAsyncChannel.cpp
  async/TUnframedAsyncChannel.cpp
  async/TZlibAsyncChannel.cpp
)

add_library(
  util

  util/FdUtils.cpp
  util/THttpParser.cpp
  util/SocketRetriever.cpp
  util/VarintUtils.cpp
)

add_library(
  server

  server/TServer.cpp
)

add_library(
  thrift

  EventHandlerBase.cpp
  Thrift.cpp
  VirtualProfiling.cpp
)
target_link_libraries(
  thrift

  async
  concurrency
  protocol
  transport
  ${FOLLY_LIBRARY}
  ${GLOG_LIBRARIES}
)
install(TARGETS thrift DESTINATION lib)

set(THRIFT1_HEADER_DIRS
  async
  concurrency
  protocol
  server
  transport
  util
)
foreach(dir ${THRIFT1_HEADER_DIRS})
  install(DIRECTORY ${dir} DESTINATION include/thrift/lib/cpp
          FILES_MATCHING PATTERN "*.h")
  install(DIRECTORY ${dir} DESTINATION include/thrift/lib/cpp
          FILES_MATCHING PATTERN "*.tcc")
endforeach()
