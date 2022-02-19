#include <iostream>

#define ll long long

using namespace std;

void solve(){
	ll n, k;
	cin >> n >> k;
	ll shov = n;
	if(n<=k){
		cout << 1 << endl;
		return;
	}
	for(ll i = 2; i*i <= n; ++i){
		int cnt = 0;
		while(n%i == 0){
			++cnt;
			n/=i;
		}
		if(cnt>0){
			for(int j = 1; j <= cnt; j++){
				if(shov/(i*j)<=k){
					cout << i*j << endl;
					return;
				}
			}
		}
	}
	cout << shov << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
