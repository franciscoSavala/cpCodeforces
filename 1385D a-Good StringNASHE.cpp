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
int changes(string& s, int lvl){
	if(s.size() == 1){
		return s[0] != 'a' + lvl;
	}else{
		int ans = 0;
		int ans1 = 0, ans2 = 0;
		string s1 = "", s2 = "";
		for(int i = 0; i < s.size()/2; i++){
			if(s[i] != 'a' + lvl) ans1++;
			s1 += s[i];	
		}
		for(int i = s.size()/2; i < s.size(); i++){
			if(s[i] != 'a' + lvl) ans2++;
			s2 += s[i];
		}
		cout << s1 << " " << s2 << endl;
		int ans22 = changes(s1, lvl+1), ans11 = changes(s2, lvl+1);
		if(ans11 + ans1 > ans22 + ans2){
			ans = ans22 + ans2;
		}else{
			ans = ans11 + ans1;
		}
		return ans;
	}// TEAMO LEETCODE LPM GRACIAS POR ENSEÑARME FUNCIONES RECURSIVAS NEAAAA
}
void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << changes(s,0) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
