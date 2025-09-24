#include <iostream>
#include <cstring>
using namespace std;

string masuk;
int n;

int main() {
  cin >> masuk >> n;

  int len = masuk.length();
  for (int i = 0; i < len; i++) {
    if (masuk[i]+n > 122){
    	masuk[i] -= 26;
	} 
	masuk[i]+= n;
  }

  cout << masuk;
}