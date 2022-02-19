#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <string>
#define ll unsigned long long

using namespace std;

string st_mult(string a, int x){
	string ans = "";
	for(int i=0; i<x; i++){
		ans += a;
	}
	return ans;
}

void solve(){
	string s, t;
	cin >> s >> t;
	vector<int> cant_s(26, 0), cant_t(26, 0);
	for(char d: s){
		cant_s[d-'a'] += 1;
	}
	for(char d: t){
		cant_t[d-'a'] += 1;
	}
	for(int i = 0; i<26 ; i++){
		if((cant_s[i] > 0 && cant_t[i] == 0) || (cant_t[i] > 0 && cant_s[i] == 0)){
			cout << -1 << endl;
			return;
		}
	}
	cout << "CASI XD" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
