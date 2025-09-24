#include <iostream>
using namespace std;

int n, k, catat[10];

void tulis(int f){
	if (f >= k){
		for (int i=0; i<n; i++){
			if(catat[i] !=0){
				cout << catat[i] << " ";	
			}
		}
		cout << endl;
	}else {
		for (int i=catat[f-1]+1; i<=n; i++){
			catat[f] = i;
			tulis (f+1);
		}
	}
	
}

int main(){
	cin >> n >> k;
	
	tulis (0);
}