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

int adjMat[20][500][500];
vi adjList[25][500];
vi verticesList[25];

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
			// cout<<i<<endl;
			// cout<<t1<<" "<<t2<<endl;

			adjMat[(i%world_size)][t1][t2] = 1;
			adjMat[(i%world_size)][t2][t1] = 1;

			adjList[(i%world_size)][t1].pb(t2);
			adjList[(i%world_size)][t2].pb(t1);

			verticesList[(i%world_size)].pb(t1);
			verticesList[(i%world_size)].pb(t2);
		}

		rep(i, world_size)
		{
			getunique(verticesList[(i%world_size)]);

			/* cout<<"Process No. " << i<<" : "<<endl;
			repn(j, n)
			{
				repn(k, n) cout<<adjMat[i][j][k]<< " ";
				cout<<endl;
			}

			rep(j, verticesList[(i%world_size)].size()) cout<<verticesList[(i%world_size)][j]<<" ";
			cout<<endl;*/

		}

	}


	deinit();
	return 0;
}
