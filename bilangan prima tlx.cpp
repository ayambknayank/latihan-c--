#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	for (int i=0; i<n; i++){
		int x;
		cin >> x;
		
		int a=2;
		while (a*a<=x){
			if (x%a == 0){
				cout << "bukan\n";
			}
			else {
				cout << "ya\n";
			}
			a++;
			
		}
	}
}