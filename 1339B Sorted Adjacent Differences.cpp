#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	vector<int> ans;
	int point = n/2;
	ans.push_back(a[point]);
	int plow = point-1, ptop = point+1;
	while(plow>=0 || ptop<n){
		if(plow>=0){
			ans.push_back(a[plow]);
		}
		if(ptop<n){
			ans.push_back(a[ptop]);
		}
		ptop++;
		plow--;
	}
	for(int i=0; i<n; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
	
	return 0;
}

