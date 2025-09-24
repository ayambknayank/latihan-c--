#include <iostream>
using namespace std;

int luas_kubus (int p=2, int l=2, int t=2);//deklarasikan nilai default diatas

int main(){
	 //dafault argumen atau nilai standar
	 
	 cout << "luas kubus adalah : " << luas_kubus (3, 4, 5) << endl;
	 cout << "luas kubus adalah : " << luas_kubus (3, 4) << endl;
	 cout << "luas kubus adalah : " << luas_kubus (3) << endl;
	 cout << "luas kubus adalah : " << luas_kubus () << endl;
}

int luas_kubus (int p, int l, int t){
	return p*l*t;
}