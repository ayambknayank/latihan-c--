#include <iostream>
using namespace std;
int main(){
	
	int jml , maks, min;
	
	cin >> jml;
	
	int bil;
	cin >> bil;
	maks = min = bil;
	
	for (int i=1; i<jml; i++){
		cin >> bil;
		
		if (bil>maks){
			maks=bil;
		}
		if (bil<min){
			min=bil;
		}
	}
	cout << maks << " " << min << endl << endl;

}