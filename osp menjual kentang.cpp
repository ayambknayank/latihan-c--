#include<iostream>
using namespace std;

int average(int array[], int n){
	double rata= 0.0;
	for(int i=0; i<n; i++){
		rata+=array[i];
	}
	double hasil =rata / n;
	return hasil;
}

void urutan(int arr[], int n){
	for(int i=0; i< n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main (){
	int n, m;
	cin >> n >> m;
	
	
	int kA[10000];
	int kB[10000];
	for(int i=0; i< n; i++){
		cin >> kA[i];
	}
	for(int i=0; i< m; i++){
		cin >> kB[i];
	}
	
	urutan (kA, n);
	urutan (kB, m);
	
	
	int rataA = average (kA, n);
	int rataB = average (kB, m);
	//cout << rataA << " " << rataB;
	
	int tambah=0;
	int hasil = 0;
	while(rataA<=rataB){
		//int i=0;
		for(int i=0; i<m; i++){
			if()
		}
		int temp = kB[i];
		kA[n+tambah] = temp;
		hasil+=temp;
		kB[i] = 0;
		i++;
		tambah++;
		
		urutan (kA, n+tambah);
		urutan (kB, m-i);
		rataA = average (kA, n+tambah);
		rataB = average (kB, m-i);
		
		if (rataB == 0){
			cout << "-1";
		}		//cout << rataA << " " << rataB << endl;
	}
	cout << hasil;
	
	return 0;
}