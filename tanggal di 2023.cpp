#include<bits/stdc++.h>
using namespace std;

bool cek(int a, int b){
	if(b>=1 && b<=7 && b%2!=0){
		if(a>=1 && a<=31){
			return true;
		}
	}
	if(b>=8 && b<=12 && b%2==0){
		if(a>1 && a<=31){
			return true;
		}
	}
	if(b>=1 && b<=7 && b%2==0){
		if(b==2 && a<=28 && a>=1){
			return true;
		}
		if(b!=2 && a>=1 && a<=30){
			return true;
		}
	}
	if((b>=8 && b<=12 && b%2!=0)){
		if(a>=1 && a<=30){
			return true;
		}
	}
	return false;
}

int main(){
	int a, b;
	cin >> a >> b;
	
	if(cek(a, b)){
		if(cek(b, a)){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}
}