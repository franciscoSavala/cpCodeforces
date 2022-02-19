#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#define ll unsigned long long

using namespace std;

void solve(){
	int n, d;
	cin >> n >> d;
	vector<short> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	if(a[0] + a[1] <= d){
		for(int i = 2; i<n; i++){
			a[i] = a[0] + a[1];
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] > d){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
