//http://codeforces.com/problemset/problem/96/A
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
    int one = 0 , zero = 0 ;
    string s ;
    cin >> s ;
    for(int i = 0 ;i<(int)s.length() ;i++) {
        if(s[i] == '1') one++ , zero = 0;
        else one = 0 , zero++ ;
        if(one == 7 || zero == 7) {
            cout <<"YES" << endl ;
            return 0 ;
        }
    }
    cout <<"NO" << endl;
    return 0 ;
}


