//http://codeforces.com/problemset/problem/219/A
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

int a[27] ;

int main() {
    int k  , temp;
    string s  , ans="";
    cin >> k >> s ;
    for(int i = 0 ;  i<(int)s.length() ;i++) 
        a[s[i]-'a']++;
    for(int i = 0 ; i<26 ;i++) {
        if(!(a[i]%k)){
            temp = a[i]/k ;
            for(int j = 1 ;j<=temp ; j++)
                ans+=(i+'a') ;
        }
        else {
            cout <<"-1" << endl ;
            return 0 ;
        }
    }
    s = ans ;
    for(int i = 2;i<=k ;i++)ans+=s ;
    cout << ans << endl ;
    return 0 ;
}


