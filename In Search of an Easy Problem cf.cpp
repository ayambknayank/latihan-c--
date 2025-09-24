#include<bits/stdc++.h>
using namespace std;

int n, x;
bool cek=true;

int main(){
	cin >> n;
	while(n--){
		cin >> x;
		if(x==1){
			cek = false;
		}
	}
	if(cek){
		cout << "EASY";
	}else{
		cout << "HARD";
	}
}