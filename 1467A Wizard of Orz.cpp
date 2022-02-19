#include <iostream>
#include <math.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n==1){
		cout << 9 << endl;
		return;
	}
	for(int i=0; i<n; i++){
		cout << (abs(1-i)+8)%10;
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
