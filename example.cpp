#include <iostream>
using namespace std;

bool isPrime(int x) {
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

int main() {
  int n;
  cin >> n;
  int data[n];
  for (int i = 0; i < n; i++) {
    cin >> data[i];
  }
  for (int i = 0; i < n; i++) {
    if (isPrime(data[i])) {
      cout << "YA" << endl;
    } else {
      cout << "BUKAN" << endl;
    }
  }
  return 0;
}
