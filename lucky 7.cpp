#include<iostream>
using namespace std;

int n;

int main(){
	cin >> n;
	if(n%2==1){
		cout << 2 << endl;
		cout << n/2 << " " << (n/2)+1 << endl;
	}
	else{
		cout << n-1 << endl;
		for(int i=1; i<=n-2; i++){
			cout << 1 << " ";
		}
		cout << 2 << endl;
	}
}