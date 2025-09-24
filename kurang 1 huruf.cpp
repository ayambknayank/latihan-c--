#include <iostream>
#include <string>
using namespace std;

bool kurang(string a, string b){
	if (a.size()-b.size()>1){
		return false;
	}else if(b.size() >= a.size()){
		return false;
	}
	
	for(int i=0; i<a.size(); i++){
		char awal = a[i];
		char dua = b[i];
		
		if (awal != dua){
			awal = a[i+1];
			
			if (awal!= dua){
				return false;
			}
		}
	}
	return true;
}

int main(){
	string a, b;
	cin >> a >> b;
	
	if (kurang(a, b)){
		cout << "Tentu saja bisa!";
	}else {
		cout << "Wah, tidak bisa :(";
	}
	
	return 0;
}