#include <iostream>
#define ll unsigned long long
using namespace std;

ll pow(ll a, ll b){
	ll ans = 1;
	for(ll i=0; i<b; i++){
		ans *= a;
	}
	return ans;
}

void solve(){
	int n;
	ll x;
	cin >> n >> x;
	ll ans = 0;
	for(int i=0; i<n; i++){
		ll xi;
		cin >> xi;
		int cont = 0;
		while(xi%x == 0){
			ans += xi*pow(x, cont);
			xi /= x;
			cont ++;
		}
		ans += xi*pow(x, cont);
	}
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


