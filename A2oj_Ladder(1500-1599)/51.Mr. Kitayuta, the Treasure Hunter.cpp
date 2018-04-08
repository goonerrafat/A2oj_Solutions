//http://codeforces.com/problemset/problem/505/C

#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 30006

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int dp[N][2*260] , arr[N]  , d;

int solve(int n , int l){
	int temp = abs(l-d) ;
	if(n >30000) return 0 ;
	if(dp[n][temp] != -1 )return dp[n][temp] ;

	if(l == 1) return dp[n][temp] = arr[n] + max(solve(n+l , l) , solve(n+l+1 , l+1)) ;
	return dp[n][temp] = arr[n] + max(solve(n+l ,l) , max(solve(n+l-1,l-1),
		solve(n+l+1 , l+1))) ;
}

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n , temp;
    mem(dp , -1) ;
    scanf("%d %d" , &n ,&d) ;
    for(int i = 0 ;i<n ;i++){
    	scanf("%d" , &temp) ;
    	arr[temp]++ ;
    }

    printf("%d\n" , solve(d , d)) ; 
    return 0 ;
}