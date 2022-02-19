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

string s, t;
int n, m;
ll a, b;
int ans[500][500];

void solve(){
	cin >> n;
	vector<int> p(n);
	F0(i,n) cin >> p[i];
	F0(i,n){
		F0(j,n) ans[i][j] = -1;
	}
	F0(i,n) ans[i][i] = p[i];
	
	
	F0(i,n){
		int act = ans[i][i];
		int k=i, l=i;
		while(act){
			ans[k][l] = ans[i][i];
			if(l-1>=0 && ans[k][l-1]==-1){
				l--;
			}else{
				k++;
			}
			act--;
		}
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<=i; j++) cout << ans[i][j] << " ";
		cout << endl;
	}
	
}
int main(){
	//int t;
	//cin >> t;
	//while(t--) solve();
	solve();
	return 0;
}
