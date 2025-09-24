#include <iostream>

using namespace std;

int main(){
	int a=5;
	//perbedaan dengan while looping adalah 
	//do minimal melakukan aksi sekali
	do {
		cout << "halo" << endl;
		a++;
	}while (a<10);
	
	cout << "selesai" << endl;
}