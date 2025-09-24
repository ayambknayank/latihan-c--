#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
/*
void bubbleshort (int arr[], int size){
	for (int i=0; i<size-1; i++){
		for (int k=0; k<size-i-1; k++){
			if (arr[k] > arr[k+1]){
				int temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}
}*/    //digantikan dengan fungsi sort dari <algorithm>

int main (){
	int n;
	cin >> n;
	int f[n];
	
	for (int i=0; i<n; i++){
		cin >> f[i];
	}
	
	sort(f, f+n);
	
	
	double hasil;
	if (n%2==0){
		hasil = (f[n/2-1] + f[n/2]) / 2.0;
	}else {
		hasil = f[n/2]/1.0;
	}
	cout << fixed << setprecision(1) << hasil ;
	
	
	return 0;
}