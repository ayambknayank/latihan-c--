#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	map<string, int> nama;
	while(n--){
		string s;
		cin >> s;
		
		string t;
		cin >> t;
		if(s=="DAFTAR"){
			nama[t]++;
		}else{
			cout << nama[t] << endl;
		}
	}
}