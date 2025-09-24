#include <bits/stdc++.h>
using namespace std;


int n, slot[101], flag[101]; 


void permutasi(int pos){
	if(pos > n){
		for (int i = 1; i<= n; i++){
			cout << slot[i] << " ";
		}
		cout << endl;
		return;
	}
	
	
	for (int i=1; i<=n; i++){
			if(!flag[i]){
				flag[i] = 1;
				slot[pos] = i;
				permutasi(pos + 1);
				flag[i] = 0;
			}
		}
}

int main() {
    
	cin >> n;
    
    permutasi (1);
    
    return 0;
}