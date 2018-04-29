//http://codeforces.com/problemset/problem/460/B

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

int solve(int n){	
	int sum = 0 ;
	while(n){
		sum+=(n%10) ;
		n/= 10 ;
	}
	return sum ;
}

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0) ;

    ll a , b , c ;
    vector < int > ans ;
    cin >> a >> b >> c ;

    for(int i = 82 ; i> 0 ; i--){
    	ll temp = (ll)pow(i , a) * b +c ;
    	if(temp > 1e9 || temp <= 0)continue ;
    	if(solve((int)temp) == i) ans.pb(temp) ;
    }

    sort(all(ans)) ;
    cout << (int)ans.size() << endl ;
    for(int i = 0 ;i<(int)ans.size() ;i++)
        cout << ans[i] << ' ' ;

    return 0 ;
}