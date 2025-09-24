#include<bits/stdc++.h>
using namespace std;

string s, baru;
int x, hasil;


int ubahint(string& s) {
    int result = 0;
    for (int i=0; i<s.length()-2; i++) {
        result = result * 10 + (s[i] - '0');
    }
    return result;
}

int main(){
	cin >> s;
	for(int i=0; i<s.length()-2; i++){
		baru+=s[i];
	}
	x = ubahint(s);
	//pisahkan string awal sama posisi duduk
	if(x%2==1){
		hasil = (((x/4)-1)*7) + (((x/4)-1)*8);
	}else{
		hasil = ((((x/4)-1)*7) + (((x/4)-1)*8) + 7);
	}
	
	if(s[s.length()-1]=='f'){
		hasil+=1;
	}else if(s[s.length()-1]=='e'){
		hasil+=2;
	}else if(s[s.length()-1]=='d'){
		hasil+=3;
	}else if(s[s.length()-1]=='a'){
		hasil+=4;
	}else if(s[s.length()-1]=='b'){
		hasil+=5;
	}else if(s[s.length()-1]=='c'){
		hasil+=6;
	}
	cout << hasil;
}