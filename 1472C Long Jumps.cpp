#include <iostream>
#include <vector>

#define ll unsigned long long
using namespace std;

void solve(){
	ll n;
	cin >> n;
	vector<ll> a(n), score;
	ll ans = 0;
	for(ll i=0; i<n; i++){
		ll ai;
		cin >> ai;
		a[i] = ai;
		score.push_back(-1);
	}
	for(ll i=0; i<n; i++){
		ll j=i, actual = 0;
		while(j<n){
			if(score[j] != -1){
				actual += score[j];
				break;
			}
			actual += a[j];
			j += a[j];
		}
		j = i;
		while(j<n){
			if(score[j]!=-1){
				break;
			}
			score[j] = actual;
			actual -= a[j];
			j += a[j];
		}
	}
	for(int i=0; i<n; i++){
		ans = max(ans, score[i]);
	}
	
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
