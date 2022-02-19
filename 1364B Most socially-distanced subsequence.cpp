#include <iostream>
#include <vector>


using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> p(n);
	vector<int> np;
	for(int i=0; i<n; i++) cin >> p[i];
	np.push_back(p[0]);
	for(int i=1; i<n-1; i++){
		if((p[i-1] < p[i] && p[i+1] < p[i]) || (p[i-1] > p[i] && p[i+1] > p[i])){
			np.push_back(p[i]);
		}
	}
	np.push_back(p[n-1]);
	cout << np.size() << endl;
	for(int i=0; i<np.size(); i++){
		cout << np[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
