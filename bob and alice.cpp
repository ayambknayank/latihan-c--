#include<iostream>
using namespace std;

int main(){
	int t; cin >> t;
	
	while(t--){
		long a, b;
		cin >> a >> b;
		if((a%2 + b%2)%2==0){
			cout << "Bob" << endl;
		}else{
			cout << "Alice" << endl;
		}
	}
}