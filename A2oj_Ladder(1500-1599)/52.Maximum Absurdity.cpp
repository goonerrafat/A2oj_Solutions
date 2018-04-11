//http://codeforces.com/problemset/problem/332/B
#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 211111

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int arr[N] ;
ll cost[N] ;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n , k ,temp , a , b;
    ll max_cost = -INF , max_right = -INF;

    scanf("%d %d" ,&n ,&k) ;
    for(int i =1 ;i<=n ;i++)
    	scanf("%d" ,&arr[i]) ;
    for(int i=1 ;i<=k ;i++)
    	cost[1]+=arr[i] ;
    for(int i = 2 ;i<=n-k+1 ;i++)
    	cost[i] = cost[i-1] - arr[i-1] + arr[i+k-1] ;

    for(int i = n-2*k+1 ;i>=1 ;i--) {
    	if(cost[i+k] >= max_right){
    		max_right = cost[i+k] ;
    		temp = i + k ;
    	}
    	if(cost[i] + max_right >= max_cost){
    		a = i ;
    		b = temp ;
    		max_cost = max_right + cost[i] ;
    	}
    }
    printf("%d %d" ,a ,b) ;
    return 0 ;
}