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
	int x, y;
	cin >> x >> y;
	string s;
	cin >> s;
	int cr=0,cu=0,cd=0,cl=0;
	for(char d: s){
		if(d == 'R'){
			cr++;
		}else if(d == 'U'){
			cu++;
		}else if(d == 'D'){
			cd++;
		}else{
			cl++;
		}
	}
	if(x <= cr && x >= -cl && y <= cu && y >= -cd){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
