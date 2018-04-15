//http://codeforces.com/problemset/problem/496/C
#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 111

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

char s[N][N] ;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n , m ,count = 0 ;
    bool DO ;
    vector < int > good_column ;

    scanf("%d %d" ,&n ,&m) ;
    for(int i =0 ;i<n ;i++)
    	scanf("%s" ,s[i]) ;

    for(int j = 0 ; j<m ; j++){
        DO = false ;
        for(int i = 0 ; i<n-1 ;i++){
            if(s[i][j] > s[i+1][j]){
                DO = true ;
                for(int k = 0 ; k<(int)good_column.size() ; k++){
                    if(s[i][good_column[k]] <  s[i+1][good_column[k]]){
                        DO = false ;
                        break ;
                    }
                }
                if(DO){
                    count++ ;
                    break ;
                }
            }
        }
        if(!DO){
            good_column.pb(j) ;
        }
    }

    printf("%d\n" ,count) ;

    return 0 ;
}
