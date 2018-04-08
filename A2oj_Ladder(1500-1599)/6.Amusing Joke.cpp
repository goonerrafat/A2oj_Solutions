//http://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define MAXN 111

const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int a[MAXN] , b[MAXN] ;

int main() {
    string s1 ,s2 ,s3 ;
    cin >>s1 >>s2 >>s3 ;
    for(int i = 0 ; i<(int)s1.length() ;i++)
        a[s1[i] - 'A']++ ;
    for(int i = 0 ;i<(int)s2.length() ;i++)
        a[s2[i]-'A']++ ;
    for(int i = 0 ;i<(int)s3.length() ;i++) 
        b[s3[i]-'A']++ ;
    for(int i = 0 ;i<26 ;i++)
        if(a[i] != b[i]) {
            cout << "NO" <<endl ;
            return 0 ;
        }
    cout <<"YES" << endl ;
    
    return 0 ;
}


