#include <iostream>
using namespace std;

int main() {
  int n, x;
  int data[1000];
  
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> data[i];
  }
  for (int k=0; k<n; k++){
  	
  	bool prime = true;
  	if (data[k] == 1) {
      prime = false;
    }

    int divisor = 2;
    while (divisor < data[k]) {
      if (data[k] % divisor == 0) {
        prime = false;
      }
      divisor++;
    }
	  
	  if (prime) {
    cout << "YA" << endl;
    } else {
      cout << "BUKAN" << endl;
    }  
    
  }
}