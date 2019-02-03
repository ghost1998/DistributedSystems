#include <bits/stdc++.h>

#include <grpc/grpc.h>
#include <grpcpp/grpcpp.h>
#include "services.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using solver::Calculate;
using solver::Expression;
using solver::Result;

using namespace std;


class EvaluatorClient
{
public:
	EvaluatorClient(std::shared_ptr<Channel> channel) : stub_(Calculate::NewStub(channel)) {}

	string Evaluate(string& expr)
	{
		Expression expression;
		expression.set_infix(expr);

		Result result;

		ClientContext context;

		Status status = stub_->Evaluate(&context, expression, &result);

		if (status.ok())
		{
			return result.result();
		} 
		else 
		{
			std::cout << status.error_code() << ": " << status.error_message()<< std::endl;
			return "RPC failed";
		}
	}
private:
	std::unique_ptr<Calculate::Stub> stub_;
};


int main()
{
	EvaluatorClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));

	string infix;
	cout<<"Enter an expression to evaluate \n";
	getline(std::cin, infix); 

  	string reply = client.Evaluate(infix);
  	cout << "Evaluating expression.....\n" << reply << std::endl;
	return 0;
}