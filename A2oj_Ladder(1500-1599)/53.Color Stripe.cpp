//http://codeforces.com/problemset/problem/219/C

#include <bits/stdc++.h>
using namespace std ;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define N 511111

const int INF = 1 << 30 ;
typedef long long ll ;
typedef pair < int , int > pii ;

int n , k ;
char s[500009] ;

int different (int curr){
	char new_char ;
	int temp = 0 ;
	for(int i = 0 ;i<n ; i++){
		curr = curr^2 ;
		new_char = 'A' + (curr==0?0:1) ;
		if(s[i] != new_char)temp++ ;
	}
	return temp ;
}

char sub_character(int marker , int i){
	if(s[marker] == 'A' ||s[i] == 'A'){
		if(s[marker] == 'B' || s[i] =='B')
			return 'C' ;
		else return 'B' ;
	}
	else return 'A' ;
}

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
	freopen("input.txt", "r", stdin);
    // for writing output to output.txt
	freopen("output.txt", "w", stdout);
    #endif

	int diff1 , diff2 ;
	string  ans = "" ;
	scanf("%d %d %s" ,&n ,&k , s) ;

	cin >> s ;
	if(k == 2) {
		diff1 = different(0) ;
		diff2 = different(2) ;
		int curr= diff1>diff2?2:0;

		for(int i = 0 ; i<n ;i++){
			curr = curr^2 ;
			ans+=('A' + (curr == 0?0:1)) ;
		}
		cout << (diff1>diff2?diff2:diff1) << '\n' << ans << endl ;
	}

	else{
		int i = 0  , marker = 0 , temp = 0 ;
		char sub_char ;

		for(i = 0 ;i<n ;i++){
			if(s[marker] != s[i]){
				int diff = i - marker ;
				if(diff <=1){
					marker = i ;
					continue ;
				}
				if(diff % 2 == 0){
					sub_char = sub_character(marker , i) ;
					for(int j = marker + 1 ; j<i ; j+=2){
						s[j] = sub_char ;
						temp++ ;
					}
				}
				else {
					sub_char = sub_character(marker , i-1) ;
					for(int j = marker + 1 ; j<=i-1 ;j+=2){
						s[j] = sub_char ;
						temp++;
					}
				}
				marker = i ;
			}
		}
		if(i - marker > 1){
			sub_char = sub_character(marker , n-1) ;
			for(int j = marker+1 ; j<=n-1 ; j+=2){
				s[j] = sub_char ;
				temp++ ;
			}
		}
		cout << temp << '\n' << s <<endl ;
	}
	return 0 ;
}