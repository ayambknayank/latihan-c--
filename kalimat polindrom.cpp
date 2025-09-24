#include<bits/stdc++.h>
using namespace std;

bool polindrom(string s){
	int panjang = s.length();
	for(int i=0; i<panjang; i++){
		if(s[i] != s[panjang-i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	string s, hasil;
	while (cin >> s){
		if(polindrom(s)){
			hasil+=s;
			hasil+=" ";
		}
	}
	cout << hasil;
}