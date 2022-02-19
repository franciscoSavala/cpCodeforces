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
ll ceil2(ll a, ll b){
	return(a+b-1)/b;
}
void solve(){
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	vector<int> tm(n);
	F0(i,n){
		cin >> a[i] >> b[i];
	}
	F0(i,n) cin >> tm[i];
	ll act = a[0] + tm[0];
	F1(i,n-1){
		act += ceil2(b[i-1] - a[i-1], 2);
		if(act < b[i-1]){
			act = b[i-1];
		}
		act += a[i] - b[i-1] + tm[i];
	}
	cout << act << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
