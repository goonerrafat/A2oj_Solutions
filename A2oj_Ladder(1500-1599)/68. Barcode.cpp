//http://codeforces.com/problemset/problem/225/C

#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 1111

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int black[N] , white[N] , sumw[N] , sumb[N] , dp[N][2] ;
char input[N][N] ;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n , m , x , y ;
    scanf("%d %d %d %d\n" ,&n ,&m ,&x  ,&y) ;

    for(int i = 0 ;i<n ;i++)
        scanf("%s" , input[i]); 

    for(int j = 0 ; j < m ;j++){
    	for(int i = 0 ; i< n ;i++){
    		if(input[i][j] == '.')black[j+1]++ ;
    		else {
                white[j+1]++ ;
            }
    	}
    }

    for(int i =1 ; i<= m  ;i++){
    	sumw[i] = sumw[i-1] + white[i] ;
    	sumb[i] = sumb[i-1] + black[i] ;
    }

    for(int i = 0 ; i<= m +3 ;i++){
    	dp[i][0] = INF ;
    	dp[i][1] = INF ;
    }
    dp[0][0] = dp[0][1] = 0 ;

    for(int i =  1 ; i<= m ;i++){
    	for(int j = x ; j<= y && j<=i ; j++){
    		dp[i][0] = min(dp[i][0] , dp[i-j][1] + sumw[i] - sumw[i-j]);
    		dp[i][1] = min(dp[i][1] , dp[i-j][0] + sumb[i] - sumb[i-j]); 
    	}
    }
    printf("%d\n" , min(dp[m][0] ,dp[m][1])) ;
 
    return 0 ;
}