#include <iostream>
#include <string>
using namespace std;

long long p,q,r,n,t;

int main(){
	
	cin >> p >> q >> r >> n;
	for(int i=0; i<n; i++){
		cin >> t;
		if (t%p==0 && t%q==0 && t%r==0){
			cout << "YA" << endl;
		}else{
			cout << "TIDAK" << endl;
		}
	}
	
	return 0;
}