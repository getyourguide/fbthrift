/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "thrift/compiler/test/fixtures/fatal-compat/gen-cpp/service_with_special_names.h"
#include <thrift/lib/cpp/async/TEventServer.h>
#include <thrift/lib/cpp/server/TConnectionContext.h>
#include <thrift/lib/cpp/util/TEventServerCreator.h>

using apache::thrift::TProcessor;
using apache::thrift::async::TEventServer;
using apache::thrift::util::TEventServerCreator;

using std::shared_ptr;

using namespace  ::test_cpp1::cpp_reflection;

class service_with_special_namesHandler : virtual public service_with_special_namesIf {
 public:
  service_with_special_namesHandler() {
    // Your initialization goes here
  }

  int32_t get() {
    // Your implementation goes here
    printf("get\n");
    return int32_t();
  }

  int32_t getter() {
    // Your implementation goes here
    printf("getter\n");
    return int32_t();
  }

  int32_t lists() {
    // Your implementation goes here
    printf("lists\n");
    return int32_t();
  }

  int32_t maps() {
    // Your implementation goes here
    printf("maps\n");
    return int32_t();
  }

  int32_t name() {
    // Your implementation goes here
    printf("name\n");
    return int32_t();
  }

  int32_t name_to_value() {
    // Your implementation goes here
    printf("name_to_value\n");
    return int32_t();
  }

  int32_t names() {
    // Your implementation goes here
    printf("names\n");
    return int32_t();
  }

  int32_t prefix_tree() {
    // Your implementation goes here
    printf("prefix_tree\n");
    return int32_t();
  }

  int32_t sets() {
    // Your implementation goes here
    printf("sets\n");
    return int32_t();
  }

  int32_t setter() {
    // Your implementation goes here
    printf("setter\n");
    return int32_t();
  }

  int32_t str() {
    // Your implementation goes here
    printf("str\n");
    return int32_t();
  }

  int32_t strings() {
    // Your implementation goes here
    printf("strings\n");
    return int32_t();
  }

  int32_t type() {
    // Your implementation goes here
    printf("type\n");
    return int32_t();
  }

  int32_t value() {
    // Your implementation goes here
    printf("value\n");
    return int32_t();
  }

  int32_t value_to_name() {
    // Your implementation goes here
    printf("value_to_name\n");
    return int32_t();
  }

  int32_t values() {
    // Your implementation goes here
    printf("values\n");
    return int32_t();
  }

  int32_t id() {
    // Your implementation goes here
    printf("id\n");
    return int32_t();
  }

  int32_t ids() {
    // Your implementation goes here
    printf("ids\n");
    return int32_t();
  }

  int32_t descriptor() {
    // Your implementation goes here
    printf("descriptor\n");
    return int32_t();
  }

  int32_t descriptors() {
    // Your implementation goes here
    printf("descriptors\n");
    return int32_t();
  }

  int32_t key() {
    // Your implementation goes here
    printf("key\n");
    return int32_t();
  }

  int32_t keys() {
    // Your implementation goes here
    printf("keys\n");
    return int32_t();
  }

  int32_t annotation() {
    // Your implementation goes here
    printf("annotation\n");
    return int32_t();
  }

  int32_t annotations() {
    // Your implementation goes here
    printf("annotations\n");
    return int32_t();
  }

  int32_t member() {
    // Your implementation goes here
    printf("member\n");
    return int32_t();
  }

  int32_t members() {
    // Your implementation goes here
    printf("members\n");
    return int32_t();
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<service_with_special_namesHandler> handler(new service_with_special_namesHandler());
  shared_ptr<TProcessor> processor(new service_with_special_namesProcessor(handler));
  TEventServerCreator serverCreator(processor, port);
  shared_ptr<TEventServer> server = serverCreator.createEventServer();
  server->serve();
  return 0;
}
