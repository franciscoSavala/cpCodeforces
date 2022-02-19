#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(){
	string s;
	cin >> s;
	int n = s.size();
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	if(n == 2){
		if(s[0] == s[1]){
			cout << 1 << endl;
		}else{
			cout << 0 << endl;
		}
		return;
	}
	if(n == 3){
		if(s[0] == s[1] || s[0] == s[2] || s[2] == s[1]){
			if(s[0] == s[1] && s[0] == s[2]){
				cout << 2 << endl;
			}else{
				cout << 1 << endl;
			}
		}else{
			cout << 0 << endl;
		}
		return;
	}
	vector<bool> camb(n, 0);
	for(int i=0; i<n-2; i++){
		if(!camb[i]){
			for(int j=1; j<3; j++){
				if(s[i] == s[i+j]){
					camb[i+j] = 1;
				}
			}
		}
	}
	if(!camb[n-2]){
		if(s[n-2] == s[n-1]){
			camb[n-1] = 1;
		}
	}
	int ans = 0;
	for(int i=0; i<n; i++){
		if(camb[i]){
			ans++;
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
