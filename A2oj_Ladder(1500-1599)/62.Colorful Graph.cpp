//http://codeforces.com/problemset/problem/246/D

#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 111111

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int color[N] , cardinality[N];
set < int > uni[N];


bool utill(int a ,int b){
	return uni[color[a]].find(color[b]) == uni[color[a]].end() ;
}
int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
	freopen("input.txt", "r", stdin);
    // for writing output to output.txt
	freopen("output.txt", "w", stdout);
    #endif

	int n , m , a , b , ans = 0 , idx  = INF ;

	scanf("%d %d" ,&n ,&m) ;
	for(int i = 1 ;i<=n ;i++)
		scanf("%d" , &color[i]) ;

	for(int i = 1  ; i<= m ;i++){
		scanf("%d %d" ,&a ,&b) ;
		if(color[a]!=color[b]){
			if(utill(a , b)){
				uni[color[a]].insert(color[b]) ;
				cardinality[color[a]]++ ;
			}
			if(utill(b , a)){
				uni[color[b]].insert(color[a]) ;
				cardinality[color[b]]++ ;
			}	
		}
	}

	for(int i = 1; i<=n ;i++){
		if(cardinality[color[i]] > ans || (cardinality[color[i]] == ans && 
			color[i] < idx)){
			ans = cardinality[color[i]] ;
		idx = color[i] ;
	}
}
printf("%d\n" , idx) ;   
return 0 ;
}