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

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    ll f10 =3628800  , f8 = 487524805 ,f3=166666668 , f2 =500000004 ,  f7 = 900198419 ;
    ll MOD =1000000007 ; 

    ll k = (f10*f8) %MOD ;
    cout <<k << endl ;
    cout << (k * f2) %MOD << endl ;
   
    return 0 ;
}