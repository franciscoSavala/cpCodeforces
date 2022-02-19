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
	vector<ll> a(2*n);
	F0(i,2*n) cin >> a[i];
	if(a[2*n-1] + a[1] == 2*a[0]){
		swap(a[0], a[1]);
	}
	for(int i = 1; i<2*n-1; i++){
		if(a[i-1] + a[i+1] == 2*a[i]){
			swap(a[i], a[i+1]);
		}
	}
	if(a[0] + a[2*n-1] == 2*a[2*n]){
		swap(a[2*n], a[0]);
	}
	F0(i,2*n){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
