#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> cari_faktor(int n) {
    vector<int> faktor;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            faktor.push_back(i);
            if (i != n / i) {
                faktor.push_back(n / i);
            }
        }
    }
    return faktor;
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

signed main(){
	int x; cin >> x;
	int oo, ss, aa;
	if(isprime(x)){
		for(int i=0; i<x; i++){
			cout << 'O';
		}
		cout << "SA";
	}else{
		vector<int> faktor = cari_faktor(x);
		for(int i=0; i<faktor.size(); i++){
			for(int j=i; j<faktor.size(); j++){
				oo = faktor[i];
				ss = faktor[j];
				aa = x/(oo*ss);
				if(oo+ss+aa <= 5000 && oo*ss*aa==x){
					for(int i=0; i<oo; i++){
						cout << 'O';
					}
					
					for(int i=0; i<ss; i++){
						cout << 'S';
					}
					
					for(int i=0; i<aa; i++){
						cout << 'A';	
					}
					return 0;
				}
			}
		}
	}
}