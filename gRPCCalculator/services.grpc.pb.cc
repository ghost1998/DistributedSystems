// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: services.proto

#include "services.pb.h"
#include "services.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace solver {

static const char* Calculate_method_names[] = {
  "/solver.Calculate/Evaluate",
};

std::unique_ptr< Calculate::Stub> Calculate::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Calculate::Stub> stub(new Calculate::Stub(channel));
  return stub;
}

Calculate::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Evaluate_(Calculate_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Calculate::Stub::Evaluate(::grpc::ClientContext* context, const ::solver::Expression& request, ::solver::Result* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Evaluate_, context, request, response);
}

void Calculate::Stub::experimental_async::Evaluate(::grpc::ClientContext* context, const ::solver::Expression* request, ::solver::Result* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Evaluate_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::solver::Result>* Calculate::Stub::AsyncEvaluateRaw(::grpc::ClientContext* context, const ::solver::Expression& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::solver::Result>::Create(channel_.get(), cq, rpcmethod_Evaluate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::solver::Result>* Calculate::Stub::PrepareAsyncEvaluateRaw(::grpc::ClientContext* context, const ::solver::Expression& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::solver::Result>::Create(channel_.get(), cq, rpcmethod_Evaluate_, context, request, false);
}

Calculate::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Calculate_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Calculate::Service, ::solver::Expression, ::solver::Result>(
          std::mem_fn(&Calculate::Service::Evaluate), this)));
}

Calculate::Service::~Service() {
}

::grpc::Status Calculate::Service::Evaluate(::grpc::ServerContext* context, const ::solver::Expression* request, ::solver::Result* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace solver

