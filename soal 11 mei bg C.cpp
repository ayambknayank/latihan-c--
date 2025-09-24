#include <iostream>
using namespace std;

int main (){
	int l, r;
	cin >> l >> r;
		 
	for (int i = 2; i<r; i+=2){
		if (i>l){
			if (i%3==0){
				cout << i << " ";
			}
		
		}else {
			continue;
		}
		
		
	}
}