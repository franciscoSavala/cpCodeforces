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
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);
	F0(i,n){
		ll ai;
		cin >> ai;
		a[i] = k - ai%k;
	}
	sort(todo(a));
	pair<ll,ll> maxel = {0,0}; //elemento, cuantasveces
	int j = n-1;
	while(a[j] == k && j>=0) j--;
	for(int i = 0; i<j+1; i++){
		int actual = 1;
		while(a[i] == a[i+1] && i<n-1){
			actual++;
			i++;
		}
		if(actual >= maxel.second){
			maxel.first = a[i];
			maxel.second = actual;
		}
	}
	ll ans;
	if(maxel.second != 0){
		ans = k*(maxel.second-1) + maxel.first+1;
	}else{
		ans = 0;
	}
	cout << ans << "\n";
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
