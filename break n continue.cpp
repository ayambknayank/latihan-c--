#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	cout << endl;
	for (a>=1; a<=50;){
	
	for (int i=1; i<=a; i++){
		if (i%10==0){
			continue;
		}
		else if (i==42){
			cout << "ERROR";
			break;
		}
		else {
			cout << i;
		}
		cout<< endl;
	}break;
}
}