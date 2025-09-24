#include<bits/stdc++.h>
using namespace std;

int n, koin[101], adek=0, kakak=0, gerak=0;

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> koin[i];
		adek+=koin[i];
	}
	sort(koin, koin+n, greater<int>());
	for(int i=0; i<n; i++){
		kakak+=koin[i];
		adek-=koin[i];
		gerak++;
		if(kakak>adek){
			break;
		}
	}
	cout << gerak;
}