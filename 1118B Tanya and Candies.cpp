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
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

typedef pair<int,int>   pii; 
typedef vector<int>     vi;   
typedef vector<ll>      vl;  
typedef vector<double>  vd;  
typedef vector<char>    vc;  
typedef vector<string>  vs;  
typedef set<int>        si;  
typedef set<ll>         sl;  
typedef set<double>     sd;  
typedef set<char>       sc;  
typedef set<string>     ss;  
typedef map<int,int>    mi;  
typedef map<ll,ll>      ml;  
typedef map<double,int> md;  
typedef map<char,int>   mc;  
typedef map<string,int> ms;  

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	F0(i,n) cin >> a[i];
	if(n == 1){
		cout << 1 << endl;
		return;
	}
	vector<int> p(n);
	vector<int> s(n);
	p[0] = a[0]; p[1] = a[1];
	s[n-1] = a[n-1]; s[n-2] = a[n-2];
	for(int i = 2; i<n; i+=2) p[i] = p[i-2] + a[i];
	for(int i = 3; i<n; i+=2) p[i] = p[i-2] + a[i];
	for(int i = n-3; i>=0; i-=2) s[i] = s[i+2] + a[i];
	for(int i = n-4; i>=0; i-=2) s[i] = s[i+2] + a[i];
	
	F0(i,n) cout << s[i] << " ";
	cout << endl;
	
}
int main(){
	//int t;
	//cin >> t;
	//while(t--) solve();
	solve();
	return 0;
}
