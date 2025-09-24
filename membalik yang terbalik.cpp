#include <iostream>
using namespace std;

int reverse(int x) {
  int temp = x;
  int reversed = 0;

  while (temp > 0) {
    reversed = (reversed * 10) + (temp % 10);
    temp /= 10;
  }

  return reversed;
}

int main() {
  int a, b;
  cin >> a >> b;
  
  int n = reverse (a);
  int f = reverse (b);
  
  int c = n+f;
  
  cout << reverse (c);
}