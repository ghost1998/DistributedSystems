#include <bits/stdc++.h>
#include <mpi.h>


using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);


typedef long long ll;
typedef long int li;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef long double ld;


#define mp make_pair
#define f first
#define s second

#define pu push
#define pb push_back


#define rep(i,x) for(int i=0;i<x;i++)
#define repn(i,x) for(int i=1;i<=x;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define SORT(x) sort(x.begin(),x.end())



int world_size;
int world_rank;

char processor_name[MPI_MAX_PROCESSOR_NAME];
int name_len;
ll n , e;

int adjMat[500][500];
vi adjList[500];
vi verticesList;
int verticesBool[500];

int level[500];
int getlevel[500][500];
int sendFrontier[500];
int getFrontier[500];

int totalEdge1[1000];
int totalEdge2[1000];

int edge1[1000];
int edge2[1000];

int globallevel[1000];
void init()
{
	MPI_Init(NULL, NULL);
	MPI_Comm_size(MPI_COMM_WORLD, &world_size);
	MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
	MPI_Get_processor_name(processor_name, &name_len);
	return ;
}

void deinit()
{
	MPI_Finalize();
	return ;
}
void getunique(vi &v)
{
	SORT(v);
	auto ip = std::unique(v.begin(), v.end()); 
	v.resize(std::distance(v.begin(), ip)); 
}

void shout()
{
	printf("Hello world from processor %s, rank %d out of %d processors\n", processor_name, world_rank, world_size);
	return ;
}

void bfs(int source)
{



	MPI_Barrier(MPI_COMM_WORLD);


	

	FOR(l, 1, n)
	{
		vi frontier;

		MPI_Barrier(MPI_COMM_WORLD);
		MPI_Allgather(&level[0], 500, MPI_INT, (&getlevel)[0][0], 500, MPI_INT, MPI_COMM_WORLD);
		MPI_Barrier(MPI_COMM_WORLD);

		rep(j, world_size) repn(k, n)
		{
			if(getlevel[j][k] == l)
			{
				// cout<<j<<" "<<k<<endl;
				frontier.pb(k);
			}
		}

		// MPI_Barrier(MPI_COMM_WORLD);

		if(frontier.size() == 0) return 
		getunique(frontier);

		MPI_Barrier(MPI_COMM_WORLD);

		int neighbours[500]; rep(i, 500) neighbours[i] = 0;
		int globalNeighbours[500][500]; rep(i, 500) rep(j, 500) globalNeighbours[i][j] = 0;

		rep(i, frontier.size())  //for every element in the frontier
		{
			rep(j, adjList[frontier[i]].size()) neighbours[adjList[frontier[i]][j]] = 1;
		}

		MPI_Barrier(MPI_COMM_WORLD);

		
		MPI_Allgather((&neighbours)[0], 500, MPI_INT, (&globalNeighbours)[0][0], 500, MPI_INT, MPI_COMM_WORLD);
		MPI_Barrier(MPI_COMM_WORLD);




		rep(i, world_size) rep(j, 500) if(globalNeighbours[i][j] == 1) neighbours[j] = 1;

		MPI_Barrier(MPI_COMM_WORLD);


		repn(i, n) if(neighbours[i]==1 && level[i] == INT_MAX) 
		{
			level[i] = l+1 ; 

			globallevel[i] = l+1;
		}

		MPI_Barrier(MPI_COMM_WORLD);
	}
	return;
}
int main(int argc, char** argv)
{
	fastio;
	init();


	printf("Hello world from processor %s, rank %d out of %d processors\n", processor_name, world_rank, world_size);

	if(world_rank==0)
	{
		// cout<<"Anjan"<<endl;
		cout<<"Enter Number of vertices : "<<endl;
		cin>>n;
		cout<<"Enter Number of edges : "<<endl;
		cin>>e;

		rep(i, e)
		{
			ll t1, t2;
			cin>>t1>>t2;
			totalEdge1[i] = t1;
			totalEdge2[i] = t2;

		}	

	}

	MPI_Barrier(MPI_COMM_WORLD);
	MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD);

	MPI_Barrier(MPI_COMM_WORLD);
	MPI_Bcast(&e, 1, MPI_INT, 0, MPI_COMM_WORLD);


	MPI_Scatter(totalEdge1, (e/world_size), MPI_INT, edge1, (e/world_size), MPI_INT, 0, MPI_COMM_WORLD);
	MPI_Scatter(totalEdge2, (e/world_size), MPI_INT, edge2, (e/world_size), MPI_INT, 0, MPI_COMM_WORLD);


	rep(i, (e/world_size))
	{
		ll t1, t2;
		t1 = edge1[i];
		t2 = edge2[i];


		adjMat[t1][t2] = 1;
		adjMat[t2][t1] = 1;
		adjList[t1].pb(t2);
		adjList[t2].pb(t1);
		verticesList.pb(t1);
		verticesList.pb(t2);
		verticesBool[t1] = 1;
		verticesBool[t2] = 1;
	}

	getunique(verticesList);



	if(world_rank==0) repn(i, n) verticesBool[i] = 1;

	rep(i, 500) level[i] = INT_MAX;
	rep(i, 500) globallevel[i] = INT_MAX;
	
	MPI_Barrier(MPI_COMM_WORLD);


	repn(i, n)
	{
		if(globallevel[i] == INT_MAX) 
		{

			rep(i, 500) level[i] = INT_MAX;
			if(world_rank==0) 
			{
				level[i] = 1; 
				globallevel[i] = 1;
			}
			bfs(i);
		}
	}


	if(world_rank == 0) repn(i, n) cout<<i<<" "<<globallevel[i]<<endl;

	deinit();
	return 0;
}
