#include <iostream>
#include <string>

using namespace std;

void solve(){
	string s;
	cin >> s;
	int cont_obj = 0;
	if(s[0] == ')' || s[s.size()-1] == '('){
		cout << "NO" << endl;
		return;
	}
	for(char c : s){
		if(c=='?'){
			cont_obj += 1;
		}
	}
	string ans = (cont_obj%2==0)? "YES" : "NO";
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
