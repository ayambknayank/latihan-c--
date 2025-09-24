#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int f[1000];
	for(int i=1; i<=n; i++){
		cin >> f[i];
	}
	int ind;
	cin >> ind;
	
	for(int i=1; i<=n; i++){
		if(f[i]==ind){
			cout << i;
		}
	}
	
	return 0;
}