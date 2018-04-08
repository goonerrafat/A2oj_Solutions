//http://codeforces.com/problemset/problem/279/C

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

int increase[N] , decrease[N] , a[N] ;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n , m  , l , r;
    scanf("%d %d" ,&n ,&m) ;
    for(int i = 1 ; i<=n ;i++)
    	scanf("%d" ,&a[i]) ;

    increase[1] = 1 ;
    for(int i = 2 ; i<=n ; i++){
    	if(a[i] > a[i-1]) increase[i] = i ;
    	else increase[i] = increase[i-1] ;
    }
    decrease[n] = n ;
    for(int i = n-1 ; i>=1 ; i--){
    	if(a[i] > a[i+1])decrease[i] = i ;
    	else decrease[i] = decrease[i+1] ;
    }

    while(m--){
    	scanf("%d %d" , &l , &r) ;
    	if(increase[r] > decrease[l]) 
    		printf("No\n") ;
    	else printf("Yes\n") ;
    }
   
    return 0 ;
}
