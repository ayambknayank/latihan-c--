#include <iostream>
using namespace std;

int urutan(int arr[], int n){
	int hasil = 0;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				hasil++;
			}
		}
	}
	return hasil;
}

int main(){
	int n;
	cin >> n;
	
	int angka[1000];
	for(int i=0; i<n; i++){
		cin >> angka[i];
	}
	
	int jawab = urutan(angka, n);
	cout << jawab;
	//urutan (angka, n);
	//for(int i=0; i<n; i++){
	//	cout << angka[i];
	//}
	
	
	return 0;
}