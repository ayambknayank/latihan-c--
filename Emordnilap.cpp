#include<bits/stdc++.h>
using namespace std;

string s;
int main(){
	cin >> s;
	
	string hasil;
	for(int i=s.length()-1; i>=0; i--){
		hasil += s[i];
	}
	
	bool cek;
	for(char &a:hasil){
		if(!isalnum(a)){
			cek = false;
			break;
		}
		a = tolower(a);
		cek = true;
	}
	
	if(cek){
		cout << hasil << endl;
	}else{
		cout << "Emor tidak beruntung :(" << endl;
	}
}