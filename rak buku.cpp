#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
/*
void terbesar(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]<arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}*/

int main(){
	ll n;
	long long b;
	cin >> n >> b;
	
	ll bebek[100000];
	for(ll i=0; i<n; i++){
		cin >> bebek[i];
	}
	
	sort(bebek, bebek+n, greater<int>());
	
	ll hasil = 0;
	ll min = 0;
	for(ll i=0; i<n; i++){
		//cout << bebek[i]<< " ";
		if(b>0){
			b -= bebek[i];
			min++;
		}else{
			cout << min;
			break;
		}
			
	}
	//cout << min;
	
	return 0;
}