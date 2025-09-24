#include<bits/stdc++.h>
using namespace std;

int n;
string s;

bool cek(string &s){
	string cuk[6]={"abc", "acb", "bac", "cab", "cba", "bca"};
	for(int i=0; i<3; i++){
		if(s[i]=='.'){
			if(s[i-1]=='a'){
				s[i]='b';
			}else if(s[i-1]=='b'){
				s[i]='c';
			}else if(s[i-1]=='c'){
				s[i]='a';
			}
		}
	}
	for(int i=0; i<6; i++){
		if(s.substr(0, 3)==cuk[i]){
			return true;
		}
	}
	return false;
}

int main(){
	cin >> n;
	cin >> s;
	if(cek(s)){
		for(int i=0; i<n; i++){
			if(s[i]==s[i+1] && s[i]!='.'){
				cout << -1;
				return 0;
			}
			if(s[i]!='.' && s[i] != s[i%3]){
				cout << -1;
				return 0;
			}
		}
	}else{
		cout << -1;
		return 0;
	}
	for(int i=0; i<n; i++){
		cout << s[i%3];
	}
	cout << endl;
	return 0;
}