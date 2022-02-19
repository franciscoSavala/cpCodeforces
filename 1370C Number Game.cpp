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
	ll n;
	cin >> n;
	if(n==1){
		cout << "FastestFinger\n";
		return;
	}
	if(n == 2){
		cout << "Ashishgup\n";
		return;
	}
	if(n%2==1){
		cout << "Ashishgup\n";
		return;
	}
	int cnt2 = 0;
	int cntp = 0;
	while(n%2==0){
		cnt2++;
		n/=2;
	}
	for(int i = 2; i*i<=n; i++){
		while(n%i==0){
			cntp++;
			n /= i;
		}
	}
	if(n>1){
		cntp++;
	}
	if(cntp == 0){
		cout << "FastestFinger\n";
		return;
	}
	if(cnt2 + cntp == 2){
		cout << "FastestFinger\n";
	}else{
		cout << "Ashishgup\n";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
