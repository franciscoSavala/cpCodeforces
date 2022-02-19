#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(){
	int n;
	cin >> n;
	char board[n][n];
	int atack[n][n]; //0 no atack, - white atack, + blackatack
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			atack[i][j] = 0;
		}
	}
	vector<pair<int,int>> at = {{1,2},{2,1},{-1,2},{2,-1},{-2,1},{1,-2},{-2,-1},{-1,-2}};
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int cant;
			
			if(atack[i][j] < 0){
				board[i][j] = 'B';
				cant = 1;
			}else{
				board[i][j] = 'W';
				cant = -1;
			}
			for(pair<int,int> a:at){
				cout << a.first << " " << a.second << endl;
				if(i+a.first>=0 && i+a.first<n && j+a.second>=0 && j+a.second<n){
					
					
					atack[i+a.first][j+a.second] += cant; 
		/*			for(int x=0; x<n; x++){
		for(int y=0; y<n; y++){
			cout << atack[x][y] << " ";
		}
		cout << "\n";
	}*/
				}
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << board[i][j];
		}
		cout << "\n";
	}
	
	
	
}

int main(){
	solve();
}
