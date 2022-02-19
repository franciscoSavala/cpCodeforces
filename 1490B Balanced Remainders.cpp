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
	int n;
	cin >> n;
	vector<int>a(n);
	vector<int> c = {0,0,0};
	int bal = n/3;
	ll ans = 0;
	F0(i,n){
		cin >> a[i];
		a[i] = a[i]%3;
		c[a[i]]++;
	} 
	if(c[0] >= c[1] && c[0] >= c[2]){
		
		ans += (bal-c[1]);
		c[1] += (bal-c[1]);
		ans += 2*(bal-c[2]);
		c[2] += (bal-c[2]);
	}else if(c[1] >= c[2] && c[1] >= c[0]){
		
		ans += (bal-c[2]);
		c[2] += (bal-c[2]);
		
		ans += 2*(bal-c[0]);
		c[0] += (bal-c[0]);
	}else if(c[2] >= c[1] && c[2] >= c[0]){
		
		ans += (bal-c[0]);
		c[0] += (bal-c[0]);
		
		ans += 2*(bal-c[1]);
		c[1] += (bal-c[1]);
	}
	cout << ans << "\n"; 
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
