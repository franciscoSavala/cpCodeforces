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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int c1 = k/2, c0 = k/2;
	vector<char> p(k, '-');
	F0(i,k){
		if(s[i] != '?'){
			p[i] = s[i];
			if(p[i] == '1'){
				c1--;
			}else{
				c0--;
			}
		}
	}
	F0(i,k){
		int j = i;
		while(j+k < n){
			if(p[i] != '-'){
				if(p[i] != s[j+k] && s[j+k] != '?'){
					cout << "NO\n";
					return;
				}
			}else{
				if(s[j+k] != '?'){
					p[i] = s[j+k];
					if(p[i] == '1'){
						c1--;
					}else{
						c0--;
					}
				}
			}
			j+=k;
		}
	}
	if(c1>=0 && c0>=0){
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
