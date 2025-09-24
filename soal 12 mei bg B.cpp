#include <iostream>
#include <cmath>
using namespace std;

int main (){
	long long n;
	char s;
	cin >> n >> s;
	
	long long grup = (n-1)/4;
	long long baris_grup = (n-1)%4;
	
	long long tunggu = grup * 16;
	
	if (baris_grup == 0 || baris_grup == 2){
		tunggu += 0;
	}else if (baris_grup == 1 || baris_grup == 3){
		tunggu +=7;
	}
	
	if (s == 'f'){
		tunggu +=1;
	}else if (s == 'e'){
		tunggu +=2;
	}else if (s == 'd'){
		tunggu +=3;
	}else if (s == 'a'){
		tunggu +=4;
	}else if (s == 'b'){
		tunggu +=5;
	}else if (s == 'c'){
		tunggu +=6;
	}
	
	cout << tunggu << endl;
}