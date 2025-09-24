#include <iostream>
#include <iomanip> // Untuk menggunakan std::setw
using namespace std;

long long power(long long base, long long exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long result = power(a, b);

    // Jika bilangan lebih besar dari 999999, ambil 6 digit terakhir
    if (result == 0) {
        //
        cout << setw(6) << setfill('0') << result << endl; 
    }else if(result > 999999){
    	result = result % 1000000;
    	cout << setw(6) << setfill('0') << result << endl;
	}else{
    	cout << result;
	}

    return 0;
}
