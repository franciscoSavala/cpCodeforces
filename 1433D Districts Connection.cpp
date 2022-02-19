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
bool nmayor(vector<pair<ll,int>> &a){
	int n = a.size();
	int val = a[n/2].first;
	int j = n/2, i = n/2;
	while(j<n && a[j].first == val) j++;
	while(i>=0 && a[i].first == val) i--;
	if(a[j].first != val){
		j--;
	}
	if(a[i].first != val){
		i++;
	}
	cout << j << " " << i << endl;
	return (j-i+1>n/2);
}

void solve(){
	int n;
	cin >> n;
	vector<pair<ll,int>> a;
	F0(i,n){
		ll ai;
		cin >> ai;
		a.pb({ai, i});
	}
	sort(todo(a));
	vector<bool> s(n,1);
	if(nmayor(a)){
		cout << "NO\n";
	}else{
		cout << "YES\n";
		int cont = 0;
		while(cont < n){
			for(int i = 0; i<n-1; i++){
				if(a[i] != a[i+1])
				while(i < n && a[i] == a[i+1]) i++;
				//SOY RE DISCA PERDON Q DOWN XD
			}
		}
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
