#include <iostream>

#define ll unsigned long long
using namespace std;

void solve(){
	ll n, count = 1;
	int w, h;
	cin >> w >> h >> n;
	while(n>count && (w>1 || h>1)){
		count *= 2;
		if(w%2 == 0){
			w /= 2;
		}else if(h%2 == 0){
			h /= 2;
		}else{
			cout << "NO\n";
			return;
		}
	}
	if(n>count){
		cout << "NO\n";
	}else{
		cout << "YES\n";
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
