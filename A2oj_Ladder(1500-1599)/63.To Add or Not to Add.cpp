//http://codeforces.com/problemset/problem/231/C

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

int a[N] ;
ll sum[N] ;
bool solve(int mid , int i , int k){
	ll temp = (i - mid)*1LL*a[i] - (sum[i-1] - sum[mid-1]) ;
	if(temp <=k) return true ;
	return false ;
}
int bs(int i , int k){
	int lo = 1 , hi = i , mid ;

	while(hi > lo){
		mid = (lo+hi) >> 1 ;
		if(solve(mid , i , k))
			hi = mid ;
		else lo = mid + 1 ; 
	}
	return (i -hi + 1) ;
}

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n , k  , temp , max_freq = 0 , num ;

    scanf("%d %d" ,&n , &k) ;
    for(int i = 1 ;i<= n ;i++)
    	scanf("%d" ,&a[i]) ; 

    sort(a+1 , a + n+1) ;

    for(int i = 1 ; i <= n ;i++)
    	sum[i] = a[i] + sum[i-1] ;

    for(int i = 1 ;i<=n ;i++){
    	temp = bs(i , k) ;
    	if(temp > max_freq){
    		max_freq = temp ;
    		num = a[i] ;
    	}
    }

    printf("%d %d\n" , max_freq, num) ;
    return 0 ;
}