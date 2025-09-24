#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[105];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int terbesar = 0;
	int jml=0;
	for(int i=0; i<n; i++){
		if(a[i]>terbesar){
			terbesar = a[i];
		}
	}
	for(int i=0; i<n; i++){
		if(terbesar==a[i]){
			jml++;
		}
	}
	cout << jml;
	
	return 0;
}