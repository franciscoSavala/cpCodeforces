#include <iostream>
#include <vector>


using namespace std;

void solve(){
	long long n;
	cin >> n;
	vector<long long> x(2*n+2);
	for(int i=0; i<2*n; i++){
		x[i] = 0;
	}
	for(int i=0; i<n; i++){
		long long xi;
		cin >> xi;
		x[xi] += 1;
	}
	long long ans = 0;
	for(int i=0; i<n*2+1; i++){
		if(x[i] > 0){
			ans += 1;
		}
		if(x[i] > 1 && x[i+1] == 0){
			x[i] -= 1;
			x[i+1] = 1;
		}
	}
	if(x[n*2+1] > 0){
		ans += 1;
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
