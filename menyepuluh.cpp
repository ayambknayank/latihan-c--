#include<iostream>
#include<string>
using namespace std;

int main(){
	string n;
	cin >> n;
	
	bool ketemu;
	char awal = n[0];
	for(char x:n){
		if (x=='0'){
			if(awal=='0'){
				ketemu = false;
				break;
			}
			ketemu = true; 
			break;
		}
	}
	if(ketemu){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
	return 0;
}