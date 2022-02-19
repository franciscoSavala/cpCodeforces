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
	vector<int> a(26), b(26);
	string aa, bb;
	cin >> aa >> bb;
	F0(i,n){
		a[aa[i] - 'a']++;
		b[bb[i] - 'a']++;
	}
	
	for(int i = 25; i>=0; i--){
		if(a[i] == b[i]) continue;
		if(a[i] > b[i] || (b[i] - a[i])%k != 0){
			cout << "NO\n";
			return;
		}
		for(int j = i-1; j >=0; j--){
			if(a[j] >= k){
				if(b[i] > a[i] + a[j]){
					a[i] += a[j] - a[j]%k;
					a[j] = a[j] % k;
				}else{
					a[j] -= (b[i] - a[i]);
					a[i] = b[i];
					break;
				}
			}
		}
		if(a[i] != b[i]){
			cout << "NO\n";
			return;
		}
		
	}
	cout << "YES\n";
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
