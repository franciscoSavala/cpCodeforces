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
	vector<ll> a(n);
	vector<ll> cnt(n+1,0);
	F0(i,n) cin >> a[i];
	F0(i,n){
		cnt[a[i]]++;
	}
	cout << endl;
	if(cnt[1] != 2){
		cout << 0 << endl;
		return;
	}
	ll b = 2;
	ll p1, p2;
	for(int i = 1; i<=n; i++){
		if(b == 2){
			if(cnt[i] == 1){
				b = 1;
				p1 = i-1;
				continue;
			}
			if(cnt[i] != 2){
				cout << 0 << endl;
				return;
			}
		}
		if(b == 1){
			if(cnt[i] == 0){
				b = 0;
				p2 = i-1;
				continue;
			}
			if(cnt[i] != 1){
				cout << 0 << endl;
				return;
			}
		}
		if(b == 0){
			if(cnt[i] != 0){
				cout << 0 << endl;
				return;
			}
		}
	}
	ll p = min(p1,p2);
	ll summ = (p*(p+1))/2;
	ll suma = summ;
	for(ll i = 0; i<p; i++) suma -= a[i];
	vector<pair<int,int>> ans;
	if(suma == 0){
		ans.pb({p1,p2});
	}
	for(ll i=n-1; i>(n-1)-p; i--){
		summ -= a[i];
	} 
	if(summ == 0){
		ans.pb({p2,p1});
	}
	cout << ans.size() << endl;
	for(int i = 0; i<ans.size(); i++){
		cout << ans[i].first << " " << ans[i].second << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
