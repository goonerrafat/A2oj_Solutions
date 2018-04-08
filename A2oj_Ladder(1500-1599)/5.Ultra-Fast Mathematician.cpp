//http://codeforces.com/problemset/problem/61/A
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
    string s1 ,s2, ans ;
    cin >>s1 >>s2 ;

    for(int i =0 ;i<(int)s1.length() ;i++)
        ans+=((s1[i]-'0')^(s2[i]-'0')+'0') ;
    cout << ans << endl;
    return 0 ;
}


