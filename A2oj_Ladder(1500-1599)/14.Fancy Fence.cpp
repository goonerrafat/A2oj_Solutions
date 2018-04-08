//http://codeforces.com/problemset/problem/270/A
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
    int t , angle ;
    scanf("%d" , &t) ;
    while(t--) {
        scanf("%d" ,&angle) ;
        angle =180 - angle ;
        if(!(360%angle))printf("YES\n") ;
        else printf("NO\n") ;
    }
    return 0 ;
}


