//http://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define MAXN 1111

const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int main() {
    ios::sync_with_stdio(0) ;
    int n ,ans = 0 , temp = 0 ,a , b;
    cin >> n ;
    for(int i = 0 ; i<n ;i++) {
        cin >> a >> b ;
        temp+=(-a + b) ;
        ans = max(temp , ans) ;
    }
    cout << ans << endl ;

    return 0 ;
}


