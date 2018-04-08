//http://codeforces.com/problemset/problem/501/A
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
    int a , b , c , d , ans1 , ans2;
    scanf("%d %d %d %d" ,&a ,&b ,&c ,&d) ;
    ans1 = max((3*a)/10 , a - a*c/250) ;
    ans2 = max((3*b)/10 , b - b*d/250) ;

    if(ans1>ans2) cout<<"Misha" << endl ;
    else if(ans2>ans1) cout << "Vasya" << endl ;
    else cout <<"Tie" << endl ;

    return 0 ;
}


