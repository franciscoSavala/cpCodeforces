#include <iostream>
#include <string>

using namespace std;

void solve(){
	string s, a = "", b = "", ans="";
	cin >> s;
	int n = s.size();
	int i = 0, j = n-1;
	while(i < j || (j == i && s[i] == 'a')){
		ans += s[i];
		if(s[i] == 'a'){
			i++;
			continue;
		}
		a += s[i];
		i++;
		if(s[j] == 'a'){
			break;
		}
		b += s[j];
		j--;
		
	}
	if(b.size()!=a.size()){
		cout << ":(\n";
		return ;
	}
	cout << a << " " << b << endl;
	for(int i=0, j=b.size()-1;i<a.size(),j>=0; i++, j--){
		if(b[j]!=a[i]){
			cout << ":(\n";
			return ;
		}
	}
	cout << ans << endl;
}
int main(){
	solve();
}
