#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string kata;
	cin >> kata;
	
	int besar=0, kecil=0;
	for(char a: kata){
		if(isupper(a)){
			besar++;
		}else if(islower(a)){
			kecil++;
		}
	}
	if(besar>kecil){
		for(char &x:kata){
			x = toupper(x);
		}
	}else if(besar <= kecil){
		for(char &x:kata){
			x = tolower(x);
		}
	}
	cout << kata << endl;
	
	return 0;
}