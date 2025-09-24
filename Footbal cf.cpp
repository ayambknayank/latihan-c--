#include<bits/stdc++.h>
using namespace std;

string s;
int anem=0, lawan=0;

int main(){
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='0'){
			anem=0;
			lawan++;
			if(lawan==7){
				cout<< "YES";
				return 0;
			}
		}else{
			lawan=0;
			anem++;
			if(anem==7){
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}