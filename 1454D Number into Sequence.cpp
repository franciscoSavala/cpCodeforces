#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#define ll unsigned long long

using namespace std;

// 1
// 9876543210
void solve(){
	ll num;
	cin >> num;
	ll n = num;
	map<ll, int> factors;
	while(n%2==0){
		if(factors.find(2) == factors.end()){
			factors.insert({2, 1});
		}else{
			factors[2] += 1;
		}
		n /= 2;
	}
	for(int i=3; i*i<n; i+=2){
		while(n%i==0){
			if(factors.find(i) == factors.end()){
				factors.insert({i, 1});
			}else{
				factors[i] += 1;
			}
			n /= i;
		}
	}
	if(factors.empty()){
		cout << 1 << endl;
		cout << num << endl;
		return;
	}
	pair<ll, int> maxim(0, 0);
	map<ll, int>::iterator it;
	for(it = factors.begin(); it!=factors.end(); it++){
		if(it->second > maxim.second){
			maxim.first = it->first;
			maxim.second = it->second;
			
		}
	}
	if(maxim.second < 2){
		cout << 1 << endl;
		cout << num << endl;
		return;
	}
	ll ans = 1;
	for(it = factors.begin(); it!=factors.end(); it++){
		if(it->first != maxim.first){
			while(it->second){
				ans *= it->first;
				it->second--;
			}
		}
	}
	ans *= maxim.first;
	cout << maxim.second << endl;
	maxim.second--;
	for(int i=0; i<maxim.second; i++){
		cout << maxim.first << " "; 
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
