//http://codeforces.com/problemset/problem/285/A
#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define MAXN 111111

const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int a[MAXN] ;

int main() {
    ios::sync_with_stdio(0) ;
    int n , k ;
    cin >> n >> k ;

    while(k--) {
        cout <<n <<' ' ;
        n-- ;
    }
    for(int i = 1 ; i<n-k ; i++) cout <<i <<' ' ;
    cout<< endl ;
    return 0 ;
}
