#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	if(N>1){
		while(N>1){
			if(N % 2 == 0){
				N/=2;
				if (N==1){
				
				cout << "ya";
				}
			}
			else{
				cout << "bukan";
				break;
				
		 }
		}
	}
	else if
	(N == 1){
		cout<< "ya";
	}else {
		cout << "bukan";
	}
}