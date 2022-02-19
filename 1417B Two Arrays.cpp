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

ll binary_search(vector<ll>& a, ll el, ll left, ll right){
	ll mid;
	while(left<=right){
		ll mid = left + ((right-left)/2);
		if(a[mid] == el){
			return mid;
		}else if(a[mid] > el){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	return -1;
}

void solve(){
	int n, t;
	cin >> n >> t;
	vector<ll> a(n);
	vector<int> ans(n, -1);
	F0(i,n) cin >> a[i];
	sort(todo(a));
	for(int i = 0; i<n-1; i++){
		if(ans[i] == -1){
			int pos = binary_search(a, t-a[i], i+1, n-1);
			ans[i] = 0;
			if(pos != -1){
				ans[pos] = 1;
			}
		}
	}
	if(ans[n-1] == -1){
		ans[n-1] = 1;
	}
	F0(i,n) cout << ans[i] << " ";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
