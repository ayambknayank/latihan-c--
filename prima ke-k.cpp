#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool prima[1000005];
int prime [78000] ;

void sieve(int maxn){
	
    	for (int i = 0; i <= maxn; i++){
    		prima[i] = true;
    		prima[0] = prima[1] = false;
		}
        

    	for (int i = 2; i*i <= maxn; i++) {
        	if (prima[i]) {
        	    for (int j = i * i; j <= maxn; j += i)
            	    prima[j] = false;
        	}
    	}

    int n = 0;
    for (int i = 1; i <= maxn; i++) {
        if (prima[i])
            prime[++n]=i;
    }
}

int main (){
	
	sieve(1000000);
	int t, k;
	cin >> t;
	
	while(t--){
		cin >> k;
		cout << prime[k] << endl;
	}
	
	return 0;
}