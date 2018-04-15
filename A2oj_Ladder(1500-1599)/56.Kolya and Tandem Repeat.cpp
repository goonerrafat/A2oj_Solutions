//http://codeforces.com/problemset/problem/443/B

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

char s[300] ;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int k  , ans , n , temp1 , temp2;
    string s ;
    cin >> s >> k ;

    n = (int)s.length() ;
    for(int i = 0 ;i<k ; i++) s+="?" ;
    ans = k;
   
    for(int i = 0 ;i<n ; i++){
    	temp1 = (n+k - i) >> 1 ;
    	for(int j = temp1 ; j>((k>>1)-1) ; j--){
    		temp2 = i ;
    		while((s[temp2] == s[temp2+j] || s[temp2+j] == '?') &&
    			temp2 - i <j) 
    			temp2++ ;
    		if(temp2 - i == j) ans = max(ans , j << 1) ;
    	}
    } 
    printf("%d\n" , ans) ;
    return 0 ;
}