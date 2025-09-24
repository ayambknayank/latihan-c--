#include <iostream>
using namespace std;

bool prima(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


int main(){
	int n;
	cin >> n;
	
	int panjang;
	int lebar;
	if(prima(n)||n==1){
		panjang = 1;
		lebar = n;
	}else{
		for(int i=2; i< n; i++){
			if(n%i==0){
				lebar = i;
				panjang = n/i;
			}
		}
	}
	
	cout << panjang << " " << lebar;
	
	return 0;
}