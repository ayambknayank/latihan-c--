#include <iostream>
#include <array>
using namespace std;

//membuat array dengan menggunakan standard library
//array<int, jumlah array> nama array

int main(){
	array < int, 5 > nilai;
	
	for (int i=0; i<=4; i++){
		nilai [i] = i;
		cout << "nilai [" << i << "] = " << nilai [i] << endl;
	}
}