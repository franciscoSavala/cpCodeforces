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
	ll n;
	cin >> n;
	ll num = n;
	ll maxdiv = 0;
	if(n%2==0){
		maxdiv = 2;
		n /= 2;
	} 
	for(int i = 3; i*i <= n; i+=2){
		while(n%i==0){
			maxdiv = i;
			n /= i;
		}
	}
	if(n>1) maxdiv = n;
	cout << maxdiv - 1 + num/maxdiv - 1 << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
