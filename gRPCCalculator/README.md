
Commands to compile form scratch : 

protoc -I . --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./services.proto
protoc -I . --cpp_out=. ./services.proto
make

Start the server : /evaluator_server 
Start the client : /evaluator_client

Enter the space seperated infix expression to be evaluated.
