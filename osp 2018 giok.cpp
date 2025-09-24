#include <iostream>
#include <numeric>
using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b, a%b);
}

int gcdarray(int arr[], int n){
	int hasil = arr[0];
	for(int i=1; i<n; i++){
		hasil = gcd(hasil, arr[i]);
		if(hasil ==1){
			break;
		}
	}
	return hasil;
}

int main(){
	int n;
	cin >> n;
	
	int b[105];
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	
	if(gcdarray(b, n)==1){
		cout << "LAYAK";
	}else{
		cout << "TIDAK LAYAK";
	}
	
	return 0;
}