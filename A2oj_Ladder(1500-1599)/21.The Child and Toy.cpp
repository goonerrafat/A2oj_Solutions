//http://codeforces.com/problemset/problem/437/C

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

int value[MAXN] ;
int main() {
    int n , m  , a , b ,ans = 0;
    scanf("%d %d" ,&n ,&m) ;
    for(int i = 1 ; i<= n ;i++)
        scanf("%d" ,&value[i]) ;

    for(int i = 0 ; i<m ;i++) {
        scanf("%d %d" ,&a ,&b) ;
        ans+=min(value[a] , value[b]) ;
    }
    printf("%d\n" , ans) ;
    return 0 ;
}
