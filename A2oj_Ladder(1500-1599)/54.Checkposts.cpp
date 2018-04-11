//http://codeforces.com/problemset/problem/427/C
#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 111111
#define MOD 1000000007

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

vector < vector < int > > g(N) ,r(N) ;
bool visited[N] ;
stack < int > finishing_order ;
int cost[N] , min_cost , freq = 1 ; 

void dfs1(int u){
	visited[u] = true ;
	for(int i = 0 ; i<g[u].size() ;i++)
		if(!visited[g[u][i]])dfs1(g[u][i]) ;
	finishing_order.push(u) ;
}

void dfs2(int u){
	visited[u]  = true ;
	if(min_cost > cost[u])min_cost = cost[u]  , freq = 1 ;
	else if(min_cost == cost[u])freq++ ;

	for(int i =0 ;i<r[u].size() ;i++) 
		if(!visited[r[u][i]]) dfs2(r[u][i]) ;
}

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
	freopen("input.txt", "r", stdin);
    // for writing output to output.txt
	freopen("output.txt", "w", stdout);
    #endif

	int n , m ,  a , b;
	ll ans1 = 0  , ans2 =1 ;

	scanf("%d" , &n) ;
	for(int i =1 ;i<= n ;i++)
		scanf("%d" ,&cost[i]) ;
	scanf("%d" , &m) ;
	for(int i =1 ;i<= m ;i++){
		scanf("%d %d" ,&a ,&b) ;
		g[a].pb(b) ;
		r[b].pb(a) ;
	}

	for(int i =1 ; i<= n ;i++)
		if(!visited[i])dfs1(i) ;

	mem(visited , 0) ;
	while(!finishing_order.empty()){
		int u = finishing_order.top() ;
		finishing_order.pop() ;

		if(!visited[u]){
			min_cost = INT_MAX ;
			freq = 0 ;
			dfs2(u) ;
			ans1+=min_cost ;
			ans2 = ((ans2%MOD) *(freq%MOD))%MOD ;
		}
	}	
	
	printf("%lld %lld\n" , ans1 , ans2) ;
	return 0 ;
}