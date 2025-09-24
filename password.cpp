#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	int panjang = s.length();
	int huruf=0;
	bool simbol=0, kecil=0, kapital=0, angka=0; 
	for(char a:s){
		if(a>='a' && a<='z'){
			kecil = true;
			huruf++;
		}
		else if(a>='A' && a<='Z'){
			kapital = true;
			huruf++;
		}
		else if(a>='0' && a<='9'){
			angka = true;
		}else{
			simbol = true;
		}
	}
	if(panjang>=8 && simbol && angka && kapital && kecil){
		cout << "Kuat";
	}else if(huruf>12){
		cout << "AgakKuat";
	}else{
		cout << "Lemah";
	}
	
	return 0;
}