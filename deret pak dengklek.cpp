#include <iostream>
#include <algorithm>
using namespace std;

void bubblesort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int main(){
	int arr[10000];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<n; i++){
		if(arr[i]<0){
			int simpan = arr[i];
			arr.push_front(simpan);
			 
		}
	}
	
	return 0;
}