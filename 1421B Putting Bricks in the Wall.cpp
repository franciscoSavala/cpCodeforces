#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<string> grid(n);
	for(int i=0; i<n; i++) cin >> grid[i];
	if(grid[0][1] == grid[1][0]){
		if(grid[n-1][n-2] == grid[n-2][n-1]){
			if(grid[n-1][n-2] != grid[0][1]){
				cout << 0 << endl;
			}else{
				cout << 2 << endl;
				cout << n << " " << n-1 << endl;
				cout << n-1 << " " << n << endl;
			}
		}else{
			cout << 1 << endl;
			if(grid[n-1][n-2] == grid[0][1]){
				cout << n << " " << n-1 << endl;
			}else{
				cout << n-1 << " " << n << endl;
			}
		}
	}else{
		if(grid[n-1][n-2] == grid[n-1][n-2]){
			cout << 1 << endl;
			if(grid[0][1] == grid[n-1][n-2]){
				cout << 1 << " " << 2 <<endl;
			}else{
				cout << 2 << " " << 1 <<endl;
			}
		}else{
			cout << 2 << endl;
			if(grid[n-1][n-2] == '0'){
				cout << n << " " << n-1 << endl;
			}else{
				cout << n-1 << " " << n << endl;
			}
			if(grid[0][1] == '1'){
				cout << 1 << " " << 2 << endl;
			}else{
				cout << 2 << " " << 1 << endl;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
