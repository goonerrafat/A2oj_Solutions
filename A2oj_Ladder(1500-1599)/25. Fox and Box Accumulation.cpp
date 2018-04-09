//http://codeforces.com/problemset/problem/388/A

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

int v[MAXN] , n ;

bool solve(int k) {
    for(int i = 0 ; i<n/k ; i++) {
        int p = 0 ;
        for(int j = i ; j<n ; j+=k) {
            if(v[j]>=p)p++;
            else return false ;
        }
    }
    return true ;
}


int main() {
    scanf("%d" ,&n) ;
    for(int i = 0 ; i<n ;i++) scanf("%d" ,&v[i]) ;
    sort(v , v+n) ;

    int low = 1 , high = n ;

    while(high -low >1){
        int mid = (high+low)>>1 ;
        if(!solve(mid)) low = mid ;
        else high = mid ;
    }
    if(solve(low)) high = low ;
    printf("%d\n" , high) ;
    
    return 0 ;
}

