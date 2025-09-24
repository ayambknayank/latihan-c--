#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
	char lagi;
	
	cout << "selamat datang di persen kecocokan" << endl;
	while (true){
		cout << "main? (y/n)" << endl;
		cin >> lagi;
		
		if (lagi == 'y'){
			string a;
		cout << "masukkan nama anda : ";
		cin >> a;
	
		string b;
		cout << "masukkan nama pasangan anda : ";
		cin >> b;
		
		cout << "kecocokan = " << rand()%100 << "%" << endl;
		}
		else if (lagi == 'n'){
			cout << "\n oke dadahh";
			break;
		}
		else {
			cout << "perintah tidak diketahui \n";
		}
	}
	
	
	//cout << "semoga lenggeng";
	return 0;
}