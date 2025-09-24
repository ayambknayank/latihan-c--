#include <iostream>
#include <cmath>
using namespace std;

bool kuadrat(int x){
	long long sqrtN = sqrt(x);
    return (sqrtN * sqrtN == x);
}

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

int indah = 0;

void faktor(int x){
	if (kuadrat(x)){
		for (int i=1; i<=x; ++i){
			if (isprime(i)){
				int f=0;
				while (x%i == 0){
					x/=i;
				}
				cout << i;
			}
		}
	}
	else{
	for (int i=1; i<=x; i++){
		if (x%i==0){
			if(kuadrat(i)){
				x/=sqrt(i);
			}
			indah = i;
			cout << i << " ";
		}
	}
	cout << indah;
	}
}

int main(){
	int x;
	cin >> x;
	
	faktor(x);
	
	return 0;
}