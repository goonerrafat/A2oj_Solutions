//http://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define MAXN 2010
#define MOD 1000000007

const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;

vector <int>divisor[MAXN] ;
int dp[MAXN][MAXN] ;

void divisors(int n) {
    for(int i = 1 ;i<= n; i++){
        for(int j = i ; j<=n; j+=i) {
            divisor[j].pb(i) ;
        }
    }
}


int main() {
    int n , k  , ans = 0;
    scanf("%d %d" , &n , &k) ;
    divisors(n) ;
    for(int  i =1 ; i<=n ; i++) dp[1][i] = 1 ;
    for(int i = 2 ;i<=k ; i++) {
        for(int j = 1 ; j<= n ;j++){
            for(int p =0 ; p<(int)divisor[j].size() ; p++)
                dp[i][j]= ((dp[i][j] % MOD) +(dp[i-1][divisor[j][p]] %MOD))%MOD ; 
        }
    }
    for(int i = 1 ;i<= n ; i++) 
        ans = (ans%MOD + dp[k][i] %MOD) %MOD ;
    printf("%d\n" , ans%MOD) ;

    return 0 ;
}


