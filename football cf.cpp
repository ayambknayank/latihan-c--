#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >> t;
	string s;cin >> s;
	t--;
	int satu=1;
	int dua = 0;
	string beda;
	while(t--){
		string p;cin >> p;
		if(s==p){
			satu++;
		}else{
			beda = p;
			dua++;
		}
	}
	if(satu>dua){
		cout << s << endl;
	}else{
		cout << beda << endl;
	}
}