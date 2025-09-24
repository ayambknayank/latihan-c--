#include <iostream>
#include <array>

using namespace std;

//looping array
//for (deklarasi variabel : array){
//		statemen
//	}

int main(){
	
	//int array[10]
	array < int, 10 > array = {0,1,2,3,4,5,6,7,8,9};
	
	for (int data : array){
		cout << "nilai nya adalah : " << data << endl;
		
	}
	
	cout << endl;
	
}