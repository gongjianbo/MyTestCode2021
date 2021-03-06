// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: MyProto.proto
#ifndef GRPC_MyProto_2eproto__INCLUDED
#define GRPC_MyProto_2eproto__INCLUDED

#include "MyProto.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace MyPackage {

// 定义服务
class MyServer final {
 public:
  static constexpr char const* service_full_name() {
    return "MyPackage.MyServer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // 普通rpc方法，客户端调用
    virtual ::grpc::Status MyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::MyPackage::MyResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::MyPackage::MyResponse>> AsyncMyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::MyPackage::MyResponse>>(AsyncMyCallARaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::MyPackage::MyResponse>> PrepareAsyncMyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::MyPackage::MyResponse>>(PrepareAsyncMyCallARaw(context, request, cq));
    }
    // 客户端发送请求到服务器，拿到一个流去读取返回的消息序列
    std::unique_ptr< ::grpc::ClientReaderInterface< ::MyPackage::MyData>> MyCallB(::grpc::ClientContext* context, const ::MyPackage::MyData& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::MyPackage::MyData>>(MyCallBRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::MyPackage::MyData>> AsyncMyCallB(::grpc::ClientContext* context, const ::MyPackage::MyData& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::MyPackage::MyData>>(AsyncMyCallBRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::MyPackage::MyData>> PrepareAsyncMyCallB(::grpc::ClientContext* context, const ::MyPackage::MyData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::MyPackage::MyData>>(PrepareAsyncMyCallBRaw(context, request, cq));
    }
    // 客户端写入流
    // rpc MyCallC (stream MyData) returns (MyData);
    // 双向流
    // rpc MyCallD (stream MyData) returns (stream MyData);
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // 普通rpc方法，客户端调用
      virtual void MyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest* request, ::MyPackage::MyResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void MyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest* request, ::MyPackage::MyResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void MyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest* request, ::MyPackage::MyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      // 客户端发送请求到服务器，拿到一个流去读取返回的消息序列
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void MyCallB(::grpc::ClientContext* context, ::MyPackage::MyData* request, ::grpc::ClientReadReactor< ::MyPackage::MyData>* reactor) = 0;
      #else
      virtual void MyCallB(::grpc::ClientContext* context, ::MyPackage::MyData* request, ::grpc::experimental::ClientReadReactor< ::MyPackage::MyData>* reactor) = 0;
      #endif
      // 客户端写入流
      // rpc MyCallC (stream MyData) returns (MyData);
      // 双向流
      // rpc MyCallD (stream MyData) returns (stream MyData);
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::MyPackage::MyResponse>* AsyncMyCallARaw(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::MyPackage::MyResponse>* PrepareAsyncMyCallARaw(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::MyPackage::MyData>* MyCallBRaw(::grpc::ClientContext* context, const ::MyPackage::MyData& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::MyPackage::MyData>* AsyncMyCallBRaw(::grpc::ClientContext* context, const ::MyPackage::MyData& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::MyPackage::MyData>* PrepareAsyncMyCallBRaw(::grpc::ClientContext* context, const ::MyPackage::MyData& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status MyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::MyPackage::MyResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::MyPackage::MyResponse>> AsyncMyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::MyPackage::MyResponse>>(AsyncMyCallARaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::MyPackage::MyResponse>> PrepareAsyncMyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::MyPackage::MyResponse>>(PrepareAsyncMyCallARaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::MyPackage::MyData>> MyCallB(::grpc::ClientContext* context, const ::MyPackage::MyData& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::MyPackage::MyData>>(MyCallBRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::MyPackage::MyData>> AsyncMyCallB(::grpc::ClientContext* context, const ::MyPackage::MyData& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::MyPackage::MyData>>(AsyncMyCallBRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::MyPackage::MyData>> PrepareAsyncMyCallB(::grpc::ClientContext* context, const ::MyPackage::MyData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::MyPackage::MyData>>(PrepareAsyncMyCallBRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void MyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest* request, ::MyPackage::MyResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void MyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest* request, ::MyPackage::MyResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void MyCallA(::grpc::ClientContext* context, const ::MyPackage::MyRequest* request, ::MyPackage::MyResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void MyCallB(::grpc::ClientContext* context, ::MyPackage::MyData* request, ::grpc::ClientReadReactor< ::MyPackage::MyData>* reactor) override;
      #else
      void MyCallB(::grpc::ClientContext* context, ::MyPackage::MyData* request, ::grpc::experimental::ClientReadReactor< ::MyPackage::MyData>* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::MyPackage::MyResponse>* AsyncMyCallARaw(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::MyPackage::MyResponse>* PrepareAsyncMyCallARaw(::grpc::ClientContext* context, const ::MyPackage::MyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::MyPackage::MyData>* MyCallBRaw(::grpc::ClientContext* context, const ::MyPackage::MyData& request) override;
    ::grpc::ClientAsyncReader< ::MyPackage::MyData>* AsyncMyCallBRaw(::grpc::ClientContext* context, const ::MyPackage::MyData& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::MyPackage::MyData>* PrepareAsyncMyCallBRaw(::grpc::ClientContext* context, const ::MyPackage::MyData& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_MyCallA_;
    const ::grpc::internal::RpcMethod rpcmethod_MyCallB_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // 普通rpc方法，客户端调用
    virtual ::grpc::Status MyCallA(::grpc::ServerContext* context, const ::MyPackage::MyRequest* request, ::MyPackage::MyResponse* response);
    // 客户端发送请求到服务器，拿到一个流去读取返回的消息序列
    virtual ::grpc::Status MyCallB(::grpc::ServerContext* context, const ::MyPackage::MyData* request, ::grpc::ServerWriter< ::MyPackage::MyData>* writer);
    // 客户端写入流
    // rpc MyCallC (stream MyData) returns (MyData);
    // 双向流
    // rpc MyCallD (stream MyData) returns (stream MyData);
  };
  template <class BaseClass>
  class WithAsyncMethod_MyCallA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_MyCallA() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_MyCallA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallA(::grpc::ServerContext* /*context*/, const ::MyPackage::MyRequest* /*request*/, ::MyPackage::MyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMyCallA(::grpc::ServerContext* context, ::MyPackage::MyRequest* request, ::grpc::ServerAsyncResponseWriter< ::MyPackage::MyResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_MyCallB : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_MyCallB() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_MyCallB() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallB(::grpc::ServerContext* /*context*/, const ::MyPackage::MyData* /*request*/, ::grpc::ServerWriter< ::MyPackage::MyData>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMyCallB(::grpc::ServerContext* context, ::MyPackage::MyData* request, ::grpc::ServerAsyncWriter< ::MyPackage::MyData>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_MyCallA<WithAsyncMethod_MyCallB<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_MyCallA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_MyCallA() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::MyPackage::MyRequest, ::MyPackage::MyResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::MyPackage::MyRequest* request, ::MyPackage::MyResponse* response) { return this->MyCallA(context, request, response); }));}
    void SetMessageAllocatorFor_MyCallA(
        ::grpc::experimental::MessageAllocator< ::MyPackage::MyRequest, ::MyPackage::MyResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::MyPackage::MyRequest, ::MyPackage::MyResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_MyCallA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallA(::grpc::ServerContext* /*context*/, const ::MyPackage::MyRequest* /*request*/, ::MyPackage::MyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* MyCallA(
      ::grpc::CallbackServerContext* /*context*/, const ::MyPackage::MyRequest* /*request*/, ::MyPackage::MyResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* MyCallA(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::MyPackage::MyRequest* /*request*/, ::MyPackage::MyResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_MyCallB : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_MyCallB() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::MyPackage::MyData, ::MyPackage::MyData>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::MyPackage::MyData* request) { return this->MyCallB(context, request); }));
    }
    ~ExperimentalWithCallbackMethod_MyCallB() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallB(::grpc::ServerContext* /*context*/, const ::MyPackage::MyData* /*request*/, ::grpc::ServerWriter< ::MyPackage::MyData>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerWriteReactor< ::MyPackage::MyData>* MyCallB(
      ::grpc::CallbackServerContext* /*context*/, const ::MyPackage::MyData* /*request*/)
    #else
    virtual ::grpc::experimental::ServerWriteReactor< ::MyPackage::MyData>* MyCallB(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::MyPackage::MyData* /*request*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_MyCallA<ExperimentalWithCallbackMethod_MyCallB<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_MyCallA<ExperimentalWithCallbackMethod_MyCallB<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_MyCallA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_MyCallA() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_MyCallA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallA(::grpc::ServerContext* /*context*/, const ::MyPackage::MyRequest* /*request*/, ::MyPackage::MyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_MyCallB : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_MyCallB() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_MyCallB() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallB(::grpc::ServerContext* /*context*/, const ::MyPackage::MyData* /*request*/, ::grpc::ServerWriter< ::MyPackage::MyData>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_MyCallA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_MyCallA() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_MyCallA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallA(::grpc::ServerContext* /*context*/, const ::MyPackage::MyRequest* /*request*/, ::MyPackage::MyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMyCallA(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_MyCallB : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_MyCallB() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_MyCallB() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallB(::grpc::ServerContext* /*context*/, const ::MyPackage::MyData* /*request*/, ::grpc::ServerWriter< ::MyPackage::MyData>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestMyCallB(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_MyCallA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_MyCallA() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->MyCallA(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_MyCallA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallA(::grpc::ServerContext* /*context*/, const ::MyPackage::MyRequest* /*request*/, ::MyPackage::MyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* MyCallA(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* MyCallA(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_MyCallB : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_MyCallB() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const::grpc::ByteBuffer* request) { return this->MyCallB(context, request); }));
    }
    ~ExperimentalWithRawCallbackMethod_MyCallB() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status MyCallB(::grpc::ServerContext* /*context*/, const ::MyPackage::MyData* /*request*/, ::grpc::ServerWriter< ::MyPackage::MyData>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* MyCallB(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)
    #else
    virtual ::grpc::experimental::ServerWriteReactor< ::grpc::ByteBuffer>* MyCallB(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_MyCallA : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_MyCallA() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::MyPackage::MyRequest, ::MyPackage::MyResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::MyPackage::MyRequest, ::MyPackage::MyResponse>* streamer) {
                       return this->StreamedMyCallA(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_MyCallA() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status MyCallA(::grpc::ServerContext* /*context*/, const ::MyPackage::MyRequest* /*request*/, ::MyPackage::MyResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedMyCallA(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::MyPackage::MyRequest,::MyPackage::MyResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_MyCallA<Service > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_MyCallB : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_MyCallB() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::MyPackage::MyData, ::MyPackage::MyData>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::MyPackage::MyData, ::MyPackage::MyData>* streamer) {
                       return this->StreamedMyCallB(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_MyCallB() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status MyCallB(::grpc::ServerContext* /*context*/, const ::MyPackage::MyData* /*request*/, ::grpc::ServerWriter< ::MyPackage::MyData>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedMyCallB(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::MyPackage::MyData,::MyPackage::MyData>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_MyCallB<Service > SplitStreamedService;
  typedef WithStreamedUnaryMethod_MyCallA<WithSplitStreamingMethod_MyCallB<Service > > StreamedService;
};

}  // namespace MyPackage


#endif  // GRPC_MyProto_2eproto__INCLUDED
