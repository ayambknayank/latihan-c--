#include<iostream>
using namespace std;

long long n, cari;

long long nyari(long long n){
	if(n%2==0){
		return n/2;
	}else{
		return (n+1)/2;
	}
}

int main(){
	cin >> n >> cari;
//	if(n/2>=cari){
//		for(int i=1; i<=n; i+=2){
//		cari--;
//		if(cari==0){
//			cout << i;
//			return 0;
//		}
//	}
//	}
//	else{
//		for(int i=2; i<=n; i+=2){
//		cari--;
//		if(cari==0){
//			cout << i;
//			return 0;
//		}
//	}
//	}

	long long angka=nyari(n);
	if(cari<=angka){
		cout << 2*cari-1;
	}else{
		cout << 2*(cari-angka);
	}
	return 0;
}