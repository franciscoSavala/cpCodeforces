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
	vector<pair<ll,ll>> ab(n);
	F0(i,n) cin >> ab[i].first;
	F0(i,n) cin >> ab[i].second;
	sort(todo(ab));
	vector<int> pref(n);
	pref[n-1] = ab[n-1].second;
	for(int i = n-2; i>=0; i--) pref[i] = pref[i+1] + ab[i].second;
	ll minn = INF+INF;
	int pos = 0;
	F0(i,n){
		if(abs(ab[i].first - pref[i]) < minn){
			minn = abs(ab[i].first - pref[i]);
			pos = i;
		}
	}/*
	F0(i,n){
		cout << ab[i].first << " ";
	}cout << endl;
	F0(i,n){
		cout << ab[i].second << " ";
	}cout << endl;
	F0(i,n){
		cout << pref[i] << " ";
	}cout << endl;*/
	if(ab[pos].first < pref[pos]){
		if(pos<n-1){
			cout << max((int)ab[pos].first, pref[pos+1]) << endl;
		}else{
			cout << ab[pos].first << endl;
		}
		
	}else{
		if(pos>=1){
			cout << max(pref[pos], (int)ab[pos-1].first) << endl;
		}else{
			cout << pref[pos] << endl;
		}
		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
