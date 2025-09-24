#include <iostream>


using namespace std;

int prima (int x){
	int b=0;
	for (int i = 2; i*i<=x; i++){
		if (x%i == 0){
			b++;
		}
		if (b>1){
			return 0;
		}
	}return 1;
}

int main (){
	int n;
	int data[1001];
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> data[i];
	}
	for (int k=0; k<n; k++){
		if (prima (data[k]) == 1){
			cout << "YA";
		}else {
			cout << "BUKAN";
		}
		cout << endl;
	}
}