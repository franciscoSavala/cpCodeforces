#include <iostream>
#include <vector>

#define ll unsigned long long

using namespace std;

void solve(){
	ll n, r;
	cin >> n >> r;
	ll ans;
	if(r>=n){
		ans = ((n-1)*(n))/2+1;
	}else{
		ans = (r*(r+1))/2;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
