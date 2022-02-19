#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <string>
#define ll unsigned long long

using namespace std;

string st_mult(string a, int x){
	string ans = "";
	for(int i=0; i<x; i++){
		ans += a;
	}
	return ans;
}

int mcm(int a, int b){
	int mayor;
	if(a>b){
		mayor=a;
	}else{
		mayor=b;
	}
	int num=mayor;
	while((num%a!=0) || (num%b!=0)){
		num++;
	}
	return num;
}

void solve(){
	string s, t;
	cin >> s >> t;
	vector<int> cant_s(26, 0), cant_t(26, 0);
	for(char d: s) cant_s[d-'a'] += 1;
	for(char d: t) cant_t[d-'a'] += 1;
	for(int i = 0; i<26 ; i++){
		if((cant_s[i] > 0 && cant_t[i] == 0) || (cant_t[i] > 0 && cant_s[i] == 0)){
			cout << -1 << endl;
			return;
		}
	}
	string copia = "";
	for(int i=0; i<s.size(); i++){
		copia += s[i];
		if(s.size()%copia.size() == 0){
			if(st_mult(copia, s.size()/copia.size()) == s){
				break;
			}
		}
	}
	if(st_mult(copia, t.size()/copia.size()) == t){
		int mc = mcm(s.size(), t.size());
		if(t.size() > s.size()){
			cout << st_mult(t, mc/t.size()) << endl;
		}else{
			cout << st_mult(s, mc/s.size()) << endl;
		}
	}else{
		cout << -1 << endl;
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
