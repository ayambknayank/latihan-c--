#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int num;
  cout << "Masukkan sebuah bilangan: ";
  cin >> num;
  if (isPrime(num)) {
    cout << num << " adalah bilangan prima." << endl;
  } else {
    cout << num << " bukan bilangan prima." << endl;
  }
  return 0;
}