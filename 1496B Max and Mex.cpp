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
/*
1
10 2
1 3 4 5 0 2 8 9 10 11
*/
ll ceil2(ll a, ll b){
	return(a+b-1)/b;
}
void solve(){
	ll n, k;
	cin >> n >> k;
	set<ll> a;
	F0(i,n){
		ll ai;
		cin >> ai;
		a.insert(ai);
	} 
	if(k == 0){
		cout << n << endl;
		return;
	}
	ll mx = *a.rbegin();
	int cnt = 0, mex = -1;
	for(auto it = a.begin(); it != a.end(); it++){
		if(*it != cnt){
			mex = cnt;
			break;
		}
		cnt++;
	}
	if(mex == -1 || (mex+1==mx && mx != 1)){
		cout << n+k << endl;
		return;
	}
	ll el = ceil2(mx+mex, 2);
	if(a.find(el) != a.end()){
		cout << n << endl;
	}else{
		cout << n+1 << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
