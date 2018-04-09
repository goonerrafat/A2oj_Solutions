//http://codeforces.com/problemset/problem/363/B

#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define MAXN 1111111

const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;

bitset<MAXN> primes ;
ll a[MAXN] ;
void PrimeSieve() {
    int n = (int)sqrt(MAXN-1) ;
    for(int i = 2 ;i<=n ; i++){
        if(!primes[i]){
            for(int j = i*i ; j<MAXN ; j+=i)
                primes[j] = 1 ;
        }
    }
}

int main() {
    PrimeSieve() ;
    int n  ;
    ll root ;
    scanf("%d" ,&n) ;
    for(int i = 0 ; i<n ;i++) 
        cin >> a[i] ;
    for(int i = 0 ;i<n ; i++) {
        root = (int)sqrt(a[i]) ;
        if(a[i] != 1LL && root*root == a[i] && !primes[root])
            printf("YES\n") ;
        else printf("NO\n") ;
    }
    return 0 ;
}
