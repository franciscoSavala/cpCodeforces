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
	int N,n=0;
	cin >> N;
	vector<int> a(N);
	F0(i,N){
		cin >> a[i];
		n+=a[i];
	}
	
	vector<int> val;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			int ene = val.size();
			for(int j = 0; j<ene; j++){
				val.pb(i*val[j]);
			}
			val.pb(i);
			n /= i;
		}
	}
	if (n > 1) {
		int ene = val.size();
		for(int j = 0; j<ene; j++){
			val.pb(n*val[j]);
		}
		val.pb(n);
	}
	set<int,greater<int>> fac;
	F0(i,val.size()){
		fac.insert(val[i]);
	}
	ll ac = 1;
	forall(it, fac) cout << *it << " ";
	forall(it, fac){
		ac = *it;
		bool ban = 1;
		int acans = 0;
		for(int j = 0; j<N; j++){
			int actsum = a[j];
			while(actsum < ac && j<N){
				acans++;
				j++;
				actsum += a[j];
			}
			if(actsum > ac){
				ban = 0;
				break;
			}
		}
		if(ban){
			cout << acans << endl;
			return;
		}
	}
	cout << N - 1 << endl;  
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
