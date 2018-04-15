//http://codeforces.com/problemset/problem/493/D
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

    int n ;
    scanf("%d" , &n) ;

    if(n &1) printf("black\n") ;
    else printf("white\n1 2\n") ;
     
    return 0 ;
}