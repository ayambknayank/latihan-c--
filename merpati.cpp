#include <iostream>
using namespace std;
int main (){
	int a;
	a=2018;
	if(a%100>20){
		a+=1;
	}
	else {
		a+=2;
	}
	cout << (a + a);
}