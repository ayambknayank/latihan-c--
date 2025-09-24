#include <iostream>
using namespace std;
int main(){
	
	int kwik, mangga, kwek, apel, kwak, jeruk;
	cin >> jeruk;
	
	
	kwik (mangga){
	int hasil = 0;
	for (int i = 0; i< mangga; i+=4){
		hasil +=i;
	}
	return hasil;
	}
	
	 kwek ( apel){
	int hasil = 0;
	for (int i = 0; i< apel; i+=3){
		hasil +=kwik(i*3)*i;
	}
	return hasil;
	}
	
	kwak ( jeruk){
	int hasil = 0;
	for (int i = 0; i< jeruk; i+=2){
		hasil +=kwek (i) + kwik (i*2);
	}
	return hasil;
	}
	
}