#include <iostream>
#include <algorithm>

using namespace std;

void solve(){
	int ans = 0;
	for(int i=0; i<2; i++){
		int n, ans2 = 0, actual = 0;
		cin >> n;
		for(int j=0; j<n; j++){
			int aj;
			cin >> aj;
			actual += aj;
			ans2 = max(ans2, actual);
		}
		ans += ans2;
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
