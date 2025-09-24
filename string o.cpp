#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int o=0;
	for(char a:s){
		if(a=='O'){
			o++;
		}
	}
	if(o==1){
		cout << "Ya" << endl;
	}else{
		cout << "Tidak" << endl;
	}
}