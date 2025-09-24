#include<bits/stdc++.h>
using namespace std;

int main(){
	string label;
	int n;
	cin >> label >> n;
	
	while(n>0){
		cout << "Anak ayam turunlah " << n << endl;
		n--;
		if(n==0){
			break;
		}
		cout << "Mati satu tinggallah " << n << endl;
	}
	cout << "Mati satu tinggallah induknya" << endl;
}