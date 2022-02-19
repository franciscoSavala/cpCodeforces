#include <iostream>

#define ll long long

using namespace std;

void solve(){
	ll x, y, a, b;
	cin >> x >> y >> a >> b;
	ll op = min(2*a, b);
	ll ans;
	if(x>y){
		ans = op*y + a*(x-y);
	}else{
		ans = op*x + a*(y-x);
	}
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
