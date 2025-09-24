#include <iostream>
using namespace std;

int nilai [1001];

int main(){
	int n, maks=-1, f;

	cin >> n;
	while (n--){
		int cek;
		cin >> cek;
		nilai[cek]++;
	}
	
	for (int i=0; i<=1000; i++){
		if (nilai[maks] <= nilai[i]){
			maks = i;
		}
		
	}
	cout << maks;
}