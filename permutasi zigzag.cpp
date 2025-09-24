#include <iostream>
using namespace std;

int n, catat[10];
bool pernah[10], zigzag, kon1, kon2;

void tulis(int f){
	if (f>=n){
		zigzag = true;
		for (int i=1; i<n-1; i++){
			kon1 = catat[i] > catat[i-1] && catat[i] > catat[i+1];
			kon2 = catat[i] < catat[i-1] && catat[i] < catat[i+1];
			
			if (!(kon1 || kon2)){
				zigzag = false;
			}
		}
		if(zigzag){
			for (int i = 0; i<n; i++){
				cout << catat[i];
			}
			cout << endl;
		}
		}else {
			for (int i=1; i<=n; i++){
				if (!pernah[i]){
					pernah[i] = true;
					catat [f] = i;
					tulis (f+1);
					pernah [i] = false;
				
			}
		}
	}
}

int main(){

	cin >> n;
	
	tulis (0);
	
	return 0;
}