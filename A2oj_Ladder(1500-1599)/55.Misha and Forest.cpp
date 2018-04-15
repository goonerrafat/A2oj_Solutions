//http://codeforces.com/problemset/problem/501/C

#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 70000

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int degree[N] , xor_sum[N] ;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
	freopen("input.txt", "r", stdin);
    // for writing output to output.txt
	freopen("output.txt", "w", stdout);
    #endif

	int n ;
	vector < pii > ans ;
	multiset < pii > pq ;

	scanf("%d" , &n) ;
	for(int i = 0 ;i<n ;i++){
		scanf("%d %d" , &degree[i] , &xor_sum[i]) ;
		pq.insert(mp(degree[i] , i)) ;
	}

	while(!pq.empty()){
		int u = pq.begin() -> second ;
		pq.erase(pq.begin()) ;
		if(!degree[u])continue ;

		int v = xor_sum[u] ;
		pq.erase(mp(degree[v] , v)) ;
		degree[v]-- ;
		xor_sum[v]^=u ;
		pq.insert(mp(degree[v] , v)) ;

		ans.pb(mp(u ,v)) ;
	}

	printf("%d\n" , (int)ans.size()) ;
	for(int i = 0 ;i<(int)ans.size() ; i++)
		printf("%d %d\n" , ans[i].first , ans[i].second) ;

	return 0 ;
}