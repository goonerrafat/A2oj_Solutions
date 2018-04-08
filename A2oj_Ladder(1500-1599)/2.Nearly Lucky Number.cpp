//http://codeforces.com/problemset/problem/110/A
/* as num <10^18 so only possilbe lucky numbers are 4 and 7 */
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
    ll num , temp , count = 0 ;
    cin >> num ;

    while(num) {
        temp = num%10 ;
        if(temp == 4 || temp == 7) count++ ;
        num/=10 ;
    }
    if(count == 4 || count == 7) cout << "YES" << endl ;
    else cout <<"NO" << endl ;

    return 0 ;
}


