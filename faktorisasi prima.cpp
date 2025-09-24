#include <iostream>
using namespace std;

bool isprime(long long x) {
  if (x == 1) {
    return false;
  }
  for (long long i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main (){
	long long n;
	cin >> n;
	for (long long i=1; i<=n; ++i){
		if (isprime(i)){
			long long f = 0;
			while (n%i == 0){
				f++;
				n/=i;
			}if (f>1){
				cout << i << "^" << f;
				if (i<n){
					cout << " x ";
				}
			}else if (f==1){
				cout << i;
				if (i<n){
					cout << " x ";
				}
			}
		}
	}
}