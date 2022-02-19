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
	int a[3], b[3] = {0,0,0};
	string s;
	cin >> n >> a[0] >> a[1] >> a[2];
	cin >> s;
	string ans = s;
	F0(i,n){
		if(s[i] == 'R') b[0]++;
		if(s[i] == 'S') b[1]++;
		if(s[i] == 'P') b[2]++;
	}
	double gan = 0;
	if(a[2] >= b[0]){
		gan += b[0];
	}else{
		gan += a[2];
	}
	if(a[0] >= b[1]){
		gan += b[1];
	}else{
		gan += a[0];
	}
	if(a[1] >= b[2]){
		gan += b[2];
	}else{
		gan += a[1];
	}
	if(gan < ((double)n)/2){
		cout << "YES\n";
		int i = 0;
		while(a[0]){
			if(s[i] == 'S'){
				ans[i] = 'R';
				a[0]--;
			}
			i++;
		}
		i=0;
		while(a[1]){
			if(s[i] == 'P'){
				ans[i] = 'S';
				a[0]--;
			}
			i++;
		}
		i=0;
		while(a[2]){
			if(s[i] == 'R'){
				ans[i] = 'P';
				a[0]--;
			}
			i++;
		}
		cout << ans << endl;
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
