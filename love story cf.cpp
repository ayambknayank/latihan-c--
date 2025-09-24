#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){
	cin >> n;
	while(n--){
		int beda=0;
		cin >> s;
		string k = "codeforces";
		for(int i=0; i<k.length(); i++){
			if(k[i]!=s[i]){
				beda++;
			}
		}
		cout << beda << endl;
	}
}