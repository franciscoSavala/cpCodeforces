#include <iostream>
#include <vector>

#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#define ll unsigned long long

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n+1);
	vector<int> oc(n+1, 0);
	for(int i=0; i<n; i++) cin >> a[i];
	int l = 0, r = n-1;
	while(a[l] == a[l+1] && l<n) l++;
	if(l==n-1){
		cout << 0 << endl;
		return;
	}
	while(a[r] == a[r-1]) r--;
	if(l+1 == r){
		cout << 1 << endl;
		return;
	}
	oc[a[l]] = 1;
	oc[a[r]] = 1;
	for(int i=l+1; i<r; i++){
		if(a[i] != a[i+1]){
			if(oc[a[i]] == 0){
				oc[a[i]] = 2;
			}else{
				oc[a[i]]++;
			}
		}
	} 
	int ans=200000;
	for(int i = 0; i<n; i++){
		if(oc[i] != 0){
			ans = min(ans, oc[i]);
		}	
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
