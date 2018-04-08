//http://codeforces.com/problemset/problem/339/B
#include <bits/stdc++.h>

using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define MAXN 11111

const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int main() {
    ios::sync_with_stdio(0) ;
    int n , m   ,a, pos = 1;
    ll cost = 0LL;
    cin >> n >> m ;
    for(int i =0 ;i<m ;i++) {
        cin >> a ;
        if(pos>a)cost+=(ll)(a+n-pos) ;
        else cost+=(ll)(a-pos) ;
        pos = a ;
    } 
    cout << cost << endl ;
    return 0 ;
}


