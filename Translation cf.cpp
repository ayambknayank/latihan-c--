#include<bits/stdc++.h>
using namespace std;

string s, t;

string balek(string s){
	string baru;
	for(int i=s.length()-1; i>=0; i--){
		baru+=s[i];
	}
	return baru;
}

int main(){
	cin >> s >> t;
	string cek = balek(s);
	if(cek==t){
		cout << "YES";
	}else{
		cout << "NO";
	}
}