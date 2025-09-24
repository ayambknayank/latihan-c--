#include <iostream>
using namespace std;
#define int long long

bool isprime(int x) {
  if (x == 1) {
    return false;
  }
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

signed main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    cout << "Faktor dari " << n << " adalah: ";


	int faktor=0, prim=0;
    // Loop untuk mencari faktor
    for (int i = 1; i <= n; ++i) {	     
      if (n % i == 0) {
            cout << i << " ";
        }
	} 
	
    return 0;
}
