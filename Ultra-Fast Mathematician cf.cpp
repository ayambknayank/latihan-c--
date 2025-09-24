#include<bits/stdc++.h>
using namespace std;

string s, t;

int main(){
	cin >> s >> t;
	for(int i=0; i<s.length(); i++){
		if(s[i]==t[i]){
			cout << "0";
		}else{
			cout << "1";
		}
	}
}