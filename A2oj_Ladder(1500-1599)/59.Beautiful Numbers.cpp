//http://codeforces.com/problemset/problem/300/C
#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 1000009
#define MOD 1000000007

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

ll a , b , fact[N] , invFact[N] ;

bool solve(int n){
	while(n){
		int digit = n%10 ;
		if(digit != a && digit != b) 
			return false ;
		n/=10 ;
	}
	return true ;	
}

void modInverse(int p, int M , int &x , int &y){
	if(!p){
		y = 1 ;
		x = 0 ;
		return ;
	}

	int x1 , y1 ;
	modInverse(M%p , p ,x1 , y1) ;
	x = y1 - (M/p) * x1 ;
	y = x1 ;

	return ;
}

void calc(){	
	fact[0] = invFact[0]  = 1LL ;

	for(int i= 1 ;i< N-2 ; i++){
		fact[i] =(fact[i-1]%MOD * i) %MOD ;
		int x , y ;
		modInverse((int)fact[i] , MOD , x , y) ;
		invFact[i] = (x%MOD + MOD) %MOD ;
	}
}

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    ll n , temp , ans = 0LL ;
    scanf("%I64d %I64d %I64d" ,&a  , &b , &n) ;

    calc() ;
    for(int i = 0 ;i<= n ;i++){
    	temp = a*i + (n-i)*b ;
    	if(solve(temp)){
    		temp = (invFact[i] * invFact[n-i])%MOD ;
    		ans = (ans + temp)%MOD ;
    	}
    }
    printf("%I64d\n", (ans*fact[n])%MOD) ;
   
    return 0 ;
}