#include <iostream>
#include <string>
#include <vector>
#define ll unsigned long long

using namespace std;

bool is_prime(ll n){
	if(n == 2){
		return 1;
	}
	if(n%2 == 0){
		return 0;
	}
	for(int i=3; i*i<=n; i+=2){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

void solve(){
	ll d;
	cin >> d;
	ll ans = 1;
	int cont = 1;
	for(int i = 0; i<2; i++){
		while(!is_prime(d+cont)){
			cont++;
		}
		ans *= d+cont;
		cont += d;
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


