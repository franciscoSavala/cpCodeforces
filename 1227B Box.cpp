#include <iostream>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> q(n);
	vector<int> ans(n);
	vector<int> qiu(n);
	for(int i=0; i<n; i++){
		int qi;
		cin >> qi;
		q[i] = qi;
		qiu[i] = i;
	}
	if(q[1] == 1){
		cout << "-1" << endl;
		return;
	}
	
	for(int i=0; i<n-1; i++){
		cout << ans[i] << " ";
	}
	cout << ans[n-1] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}

