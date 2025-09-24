#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i=0; i+2<8; i++){
		if(s[i]!=s[i+1] && s[i]!=s[i+2]){
			cout << i+1;
			return 0;
		}else if(s[i]!=s[i+1] && s[i]==s[i+2]){
			cout << i+2;
			return 0;
		}else if(s[i]==s[i+1] && s[i]!=s[i+2]){
			cout << i+3;
			return 0;
		}
	}
}