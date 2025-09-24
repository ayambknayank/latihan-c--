#include <iostream>
#include <vector>
using namespace std;

void moveToFront(int arr[], int size) {
    int temp = arr[0];
    for (int i = 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }

    // Tempatkan bilangan yang disimpan di langkah pertama ke barisan awal array
    arr[size - 1] = temp;
}


int main(){
	int n;
	cin >> n;
	
	if(prima(n)){
		cout << "ya";
	}else{
		cout << "bukan";
	}
}

/*
int main(){
    vector<long long>angka;
    long long hasil = 0;
    
    for(int i=1; i<=1001000; i++){
    	if(i%4==0 || i%7==0){
    			hasil += i;
			}
		angka.push_back(hasil);
	}
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
		int n; 
    	cin >> n;
    	cout << angka[n-1] << endl;
	}
    return 0;
}*/