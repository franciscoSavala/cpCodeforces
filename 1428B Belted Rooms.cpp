#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

void solve(){
	int n;
	string belt;
	cin >> n >> belt;
	vector<bool> room(n, 1);
	int inicia = -1;
	if((belt[0] == '>' && belt[n-1] == '<') || (belt[0] == '<' && belt[n-1] == '>')){
		room[0] = 0;
		inicia = 0;
	}
	for(int i = 1; i<n; i++){
		if((belt[i] == '>' && belt[i-1] == '<') || (belt[i] == '<' && belt[i-1] == '>')){
			room[i] = 0;
			inicia = i; 
		}
	}
	if(inicia == -1){
		cout << n << endl;
		return;
	}
	int i = (inicia + 1) % n;
	while(i != inicia){
		if((belt[i] != '-' && !room[(i==0)?n-1:i-1]) || (belt[(i==0)?n-1:i-1] != '-' && !room[(i+1)%n])) room[i] = 0;		
		i = (i+1)%n;
	}

	int ans = 0;
	for(int i = 0; i<n; i++){
		if(room[i]){
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
