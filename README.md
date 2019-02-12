# DistributedSystems
Distributed Systems Projects


Comlmands for gRPC:

Make :
make clean
make

Server : ./evaluator_server 
Client : ./evaluator_client



Comlmands for Distributed bfs : 
mpic++ -o bfs bfs.cpp 
mpirun --hostfile hostfile -np 4 bfs < inputfile