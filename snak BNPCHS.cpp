#include<iostream>

using namespace std;

long long t, n, k;
int main(){
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n >> k;
		if(n%(k+1)==0){
			cout << "Kasus #" << i+1 << ": " << "ya" << endl;
		}else{
			cout << "Kasus #" << i+1 << ": " << "tidak" << endl;
		}
	}
}