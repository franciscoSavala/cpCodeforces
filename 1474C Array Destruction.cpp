#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define ll unsigned long long
using namespace std;


void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<2*n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	vector<bool> used(n, 0);
	vector<pair<int, int>> op;
	for(int i=0; i<2*n; i++){
		for(int j=i+1; j<2*n; j++){
			if(used[j]) continue;
			if(a[i] + a[j] > a[2*n-1]){
					cout << "NO\n";
					return;
			}
			for(int k=j+1; k<2*n; k++){
				if(a[i] + a[j] == a[k]){
					op.push_back({a[i], a[j]});
					used[i] = 1;
					used[j] = 1;
				}
			}
		}
	}
	cout << "YES\n";
	cout << op[op.size()-1].first + op[op.size()-1].second << endl;
	for(int i=op.size()-1; i>=0; i--){
		cout << op[i].first + op[i].second << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


