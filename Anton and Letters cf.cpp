#include<bits/stdc++.h>
using namespace std;

string s;
int asci, hasil=0, huruf[1001]={0};

int main(){
	getline(cin, s);
	for(int i=0; i<s.length(); i++){
		asci=int(s[i]);
		huruf[asci]++;
	}
	
	for(int i=97; i<=122; i++){
		if(huruf[i]>0){
			hasil++;
		}
	}
	cout << hasil << endl;
}