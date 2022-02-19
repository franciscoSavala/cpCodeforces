#include <bits/stdc++.h>
 
using namespace std;

template<class C> void mini(C&a, C b){ a=min(a, b);}
template<class C> void maxi(C&a, C b){a=max(a,b);}
#define sz(x) x.size()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define forall(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define F0(i,n) for(int i = 0; i < n; i++)
#define F1(i,n) for(int (i) = 1; i <= n; i++)
#define F0R(i,n) for(int (i) = n-1; i >= 0; i--)
#define F1R(i,n) for(int (i) = n; i >= 1; i--)
#define REP(i,a,b) for(int i = a; i <= b; i++)
#define REPR(i,a,b) for(int i = a; i >= b; i--)
#define INF 1e9
#define todo(v) v.begin(),v.end()
#define eps 0.000000000001
#define mod 1000000007
#define PI acos(-1.0)
#define ll long long

void solve(){
	string s;
	int a,b,n;
	cin >> a >> b >> s;
	n = sz(s);
	if(n%2 != 0){
		if(a % 2 == b % 2){
			cout << -1 << endl;
			return;
		}
	}else{
		if(!(a%2==0 && b%2==0)){
			cout << -1 << endl;
			return;
		}
	}
	for(int i = 0; i<n/2; i++){
		if(s[i] == s[n-i-1]){
			continue;
		}else if(s[i] == '?'){
			s[n-i-1] = s[i];
		}else if(s[n-i-1] == '?'){
			s[i] = s[n-i-1];
		}else{
			cout << -1 << endl;
			return;
		}
	}
	cout << s << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
