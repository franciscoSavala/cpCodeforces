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
	int n, m, sx, sy;
	cin >> n >> m >> sy >> sx;
	vector<pair<int,int>> vis;
	set<int, greater<int>> cols;
	F1(i,m) cols.insert(i);
	vis.pb({sx,sy});
	for(int j=sy+1; j<=n; j++){
		vis.pb({sx,j});
	}
	for(int j=sy-1; j>=1; j--){
		vis.pb({sx,j});
	}
	cols.erase(sx);
	set<int>::iterator it;
	int cont = 0;
	for(it = cols.end(); it != cols.begin(); it--){
		if(cont%2==0){
			F1(j,n){
				vis.pb({*it, j});
			}
		}else{
			F1R(j,n){
				vis.pb({*it, j});
			}
		}
		cont++;
	}
	for(int i = 0; i<vis.size(); i++){
		cout << vis[i].second << " " << vis[i].first << endl;
	}
}
int main(){
	//int t;
	//cin >> t;
	//while(t--) 
	solve();
	return 0;
}
