#include<iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}
/*
bool hampir(int x){
	if(isprime(x)==1){
		return false;
	}
	
	int faktor=0;
	int prim = 0;
	for(int i=1; i<=x; i++){
		if(x%i==0){
			faktor++;
		}
		if(x%i==0 && isprime(i)==1){
			prim++;
		}
	}	
	if(prim<faktor){
		return false;
	}
	
	return true;
}*/

int main(){
	int t, a, b;
	cin >> t;
	
	for(int i=0; i<t; i++){
		int hasil,faktor, prim;
		cin >> a >> b;	
		
		faktor=0;
		hasil=0;
		prim=0;
		
		for(int i=a; i<=b; i++){
			for(int j=2; j<i; j++){
				if(i%j==0){
					faktor++;
					if(isPrime(j) || j==2){
						prim++;
					}
				}
			}
			if(prim==faktor){
				hasil++;
			}
		}
		cout << hasil << endl;
	}
	
	return 0;
}