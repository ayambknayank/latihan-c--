#include<bits/stdc++.h>
using namespace std;

int n, asci, huruf[91];
char a;

int main(){
	cin >> n;
	while(n--){
		cin >> a;
		a = toupper(a);
		asci=int(a);
		huruf[asci]++;
	}
	bool cek=true;
	for(int i=65; i<=90; i++){
		if(huruf[i]==0){
			cek = false;
		}
	}
	if(cek){
		cout << "YES";
	}else{
		cout << "NO";
	}
}