#include <iostream>

#define ll unsigned long long
using namespace std;

void solve(){
	int n, big = 0, small = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		int xi;
		cin >> xi;
		if(xi == 1){
			small += 1;
		}else{
			big += 1;
		}
	}
	if(n>1){
		if((small%2==0 && big%2==0) || (small>1 && small%2==0 && big%2!=0)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}else{
		cout << "NO\n";
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
