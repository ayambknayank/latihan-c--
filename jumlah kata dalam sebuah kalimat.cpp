#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	getline(cin,input);
	
	//menghitung banyak kata pada sebuah kalimat
	
	int posisi = 0;
	int jumlah = 0;
	
	while (true){
		posisi = input.find(" ", posisi+1);
		jumlah ++;
		if (posisi<0){
			break;
		}
	}
	
	cout << "jumlah kata yang anda masukkan adalah : " << jumlah;
	
	return 0;
}