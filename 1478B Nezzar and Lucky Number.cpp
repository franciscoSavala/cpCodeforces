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
	int q, d;
	cin >> q >> d;
	vector<int> luckynum;
	vector<bool> cando(d*10, 0);
	for(int i=0; i<d; i++){
		luckynum.pb(d+i*10);
	}
	for(int i=0; i<sz(luckynum); i++){
		int j=1;
		while(j*luckynum[i] < sz(cando)){
			cando[j*luckynum[i]] = 1;
			j++;
		}
	}
	for(int k=0; k<5; k++){
		for(int i=0; i<sz(cando); i++){
			if(cando[i]){
				int j = 0;
				while(i+luckynum[j] < sz(cando)){
					cando[i+luckynum[j]] = 1;
					j++;
				}
			}
		}	
	}
	
	for(int i=0; i<q; i++){
		ll ai;
		cin >> ai;
		if(ai>=d*10){
			cout << "YES\n";
			continue;
		}
		if(cando[ai]){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
