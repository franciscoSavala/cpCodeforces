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
// 1 2 3 4 5 6 7 8 9 10
// 1 4 3 2 5 8 7 6 10 9
// 1 3 4 5 6 7 8 9 2 10
void solve(){
	int n;
	cin >> n;
	vector<int> a(n+1);
	F1(i,n) cin >> a[i];
	int i = 1, j = n;
	while(i<=n && a[i] == i) i++;
	while(j>0 && a[j] == j) j--;
	if(i-1 == n){
		cout << 0 << endl;
		return;
	}
	int cont = 0;
	for(int k = i; k<=j; k++){
		if(a[k] == k){
			cont++;
		}
	}
	if(cont){
		cout << 2 << endl;
	}else{
		cout << 1 << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
