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

int a[100];
int d[100];
void clear(){
	F0(i,100){
		a[i] = 0;
		d[i] = 0;
	}
}
void split(int left, int right, int lvl){
	if(left > right){
		return;
	}
	if(left == right){
		d[left] = lvl;
		return;
	}
	pair<int,int> mx = {0,0}; //pos, val
	for(int i = left; i<=right; i++){
		if(a[i] > mx.second){
			mx.first = i;
			mx.second = a[i];
		}
	}
	d[mx.first] = lvl;
	split(mx.first+1, right, lvl+1);
	split(left, mx.first-1, lvl+1);
}

void solve(){
	int n;
	cin >> n;
	clear();
	F0(i,n) cin >> a[i];
	split(0,n-1,0);
	F0(i,n){
		cout << d[i] << " ";
	}
	cout << "\n";
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
