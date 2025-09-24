#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	
	for(char &x:a){
		x=tolower(x);
	}
	for(char &y:b){
		y=tolower(y);
	}
//	sort(a.begin(), a.end());
//	sort(b.begin(), b.end());
	int t;
	bool cek=true;
	for(int i=0; i<a.length(); i++){
		if(a[i]==b[i]){
			continue;
		}else{
			cek=false;
			t=i;
			break;
		}
	}
	
	//cout << a << endl << b << endl;
	if(cek){
		cout << "0";
	}else{
		if(int(a[t])<int(b[t])){
			cout << "-1";
		}else{
			cout << "1";
		}
	}
	
	/*
	if(tota>totb){
		cout << "1";
	}else if(tota<totb){
		cout << "-1";
	}else{
		cout << "0";
	}
	*/
}