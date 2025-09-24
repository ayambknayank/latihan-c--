#include <iostream>
using namespace std;
int main(){
	
	int n;
	int b;
	int arr [100];
	//cin >> a;
	while (cin >> n) {
		for (b=0; b<100; b++){
			while (cin >> arr[b]){
				int n=b;
				for (int i=b; i>=0; i--){
					cout << arr[i];
				}
			}
   		}
	}
	
	
}