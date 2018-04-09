//http://codeforces.com/problemset/problem/166/A

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

pii teams[51] ;
int ans[60][60] ;

bool cmp(pii a , pii b) {
    return (a.first > b.first ||(a.first == b.first &&
                a.second < b.second)) ;
}
int main() {
    int n , k ;
    scanf("%d %d" ,&n ,&k) ;
    
    for(int i = 0 ;i<n ;i++){
        scanf("%d %d" ,&teams[i].first , &teams[i].second) ;
        ans[teams[i].first][teams[i].second]++ ;
    }
    sort(teams , teams+n , cmp) ;
    cout << ans[teams[k-1].first][teams[k-1].second] << endl ;

    return 0 ;
}


