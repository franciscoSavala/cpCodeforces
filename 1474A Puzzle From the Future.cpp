#include <iostream>
#include <string>
#include <vector>
#define ll unsigned long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> b(n), ans(n, 0), a(n);
	string bin;
	cin >> bin;
	for(int i=0; i<n; i++){
		if(bin[i] == '0'){
			b[i] = 0;
		}else{
			b[i] = 1;
		}
	}
	a[0] = 1;
	ans[0] = b[0] + a[0];
	for(int i=1; i<n; i++){
		ans[i] += b[i];
		for(int j=1; j>=0; j--){
			if(ans[i-1] != ans[i] + j){
				a[i] = j;
				ans[i] += a[i];
				break;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout << a[i];
	}
	cout << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


