//http://codeforces.com/problemset/problem/118/B
#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define MAXN 50

const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;

char a[MAXN][MAXN] ;

int main() {
    int n , temp , cnt;
    scanf("%d" ,&n) ;
    temp = 2*(n+1) ;

    for(int i = 0 ; i<49 ; i++) 
        for(int j = 0 ; j<49 ; j++) a[i][j] = 'p' ;

    for(int i = 0 ;i<=n ;i++) {
        cnt = 1 ;
        for(int j = 0 ; j<(n-i) ; j++ , cnt++) {
            a[i+1][cnt] =a[temp - i -1][cnt] =' ' ;
        }
        for(int j = 0 ; j<=i ; j++ , cnt++) {
            a[i+1][cnt] =a[i+1][temp-cnt] = j+'0';
            a[temp-i-1][cnt] =a[temp-i-1][temp-cnt] = j+'0';
        }
    }
    for(int i = 1 ;i<temp ; i++) {
        for(int j = 1 ; j<temp && a[i][j] !='p'; j++){
            printf("%c" , a[i][j]) ;
            if(a[i][j+1] != 'p') printf(" ") ;
        }
        printf("\n") ;
    }
    return 0;
}
