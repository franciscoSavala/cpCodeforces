#include <iostream>
#include <math.h>
#include <vector>

#define ll long long

using namespace std;

void solve(){
	int n;
	ll x, max_bea=0, min_bea=0;
	cin >> n >> x;
	vector<ll> a(n); 
	for(int i=0; i<n; i++){
		ll ai;
		cin >> ai;
		a[i] = ai;
		double aix = (double)ai/(double)x;
		max_bea += ceil(aix);
		cout << ceil(aix) << " XDDDDDDDD\n";
	}
	int i = 0;
	ll actual = 0;
	for(int i= 0; i<n; i++){
		if(a[i]%x == 0){
			actual += a[i];
		}else{
			double aix = (double)a[i]/(double)x;
			min_bea += ceil(aix);
			aix = (double)actual/(double)x;
			min_bea += ceil(aix);
			actual = 0;
		}	
	}
	cout << min_bea << " " << max_bea << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
