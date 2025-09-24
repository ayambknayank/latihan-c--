#include <iostream>
using namespace std;

int main (){
	int n = 0;
	int data[100];
	
	while (cin >> data [n]){
		n++;
	}
	for (int i=n-1; i>=0; i--){
		cout << data[i] << endl;
	}
}