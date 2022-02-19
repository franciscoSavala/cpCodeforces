#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(){
	int n;
	vector<int> letras(26);
	for(int i=0; i<26; i++) letras[i] = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		for(char d: s){
			letras[d-'a'] += 1;
		}
	}
	for(int i=0; i<26; i++){
		if(letras[i]%n!=0){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
