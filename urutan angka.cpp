#include <iostream>
using namespace std;

void terkecil(int arr[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void terbesar(int arr[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			if (arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int angka[3], n=3;
	int a, b, c;
	char k;
	
	cin >> a >> b >> c;
	
	angka[0] = a;
	angka[1] = b;
	angka[2] = c;
	
	cin >> k;
	
	switch (k){
		case '0':
			terbesar(angka, n);
			break;
		case '1':
			terkecil(angka, n);
			break;
	}
	
	for (int i = 0; i < n; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;
	
	return 0;
}