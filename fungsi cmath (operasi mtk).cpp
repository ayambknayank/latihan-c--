#include <iostream>
#include <cmath>
using namespace std;

/*
library cmath:
ceil (x)		<- pembulatan ke atas
floor (x)		<- pembulatan ke bawah
cos (x)			<- cosinus
sin (x)			<- sinus
tan (x)			<- tangen
exp (x)			<- eksponen
fabs (x)		<- nilai absolut dalam float
fmod (x) 		<- modulus dalam float
log (x) 		<- logaritma dalam basis natural
log10 (x)		<- logaritma dalam basis 10
pow (x,y) 		<- x pangkat y
sqrt (x) 		<- akar kuadrat
*/



int main(){
	
	int a;
	cout << "menghitung akar dari a: ";
	cin >> a;
	double y = sqrt(a);
	cout << "akarnya adalah: " << y << endl;
	
	cin.get();
	return 0;
}