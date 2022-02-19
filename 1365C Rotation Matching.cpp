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
	vector<int> a(n+1), b(n+1);
	int pos = 0;
	F0(i,n){
		int ai;
		cin >> ai;
		pos++;
		a[ai] = pos;
	}
	pos = 0;
	F0(i,n){
		int bi;
		cin >> bi;
		pos++;
		b[bi] = pos;
	}
	vector<int> der(n,0), izq(n,0);
	F1(i,n){
		if(a[i] < b[i]){
			der[b[i] - a[i]]++;
			izq[n-(b[i] - a[i])]++;
		}else if(a[i] > b[i]){
			der[n-(a[i] - b[i])]++;
			izq[a[i] - b[i]]++;
		}else{
			der[0]++;
			izq[0]++;
		}
	}
	int ans = 0;
	F0(i,n){
		ans = max(ans, der[i]);
		ans = max(ans, izq[i]);
	}
	cout << ans << endl;
}
int main(){
	//int t;
	//cin >> t;
	//while(t--) solve();
	solve();
	return 0;
}
