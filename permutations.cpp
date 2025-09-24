#include <iostream>
#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
	
	if(n<4 && n!=1){
		cout << "NO SOLUTION";
	}else if(n==4){
		cout << "2 4 1 3";
	}else{
		for(ll i=n; i>=-1; i-=2){
		if(n%2==0&&i<0){
			break;
		}
		if(i<0){
			i=n-1;
		}
		if(n%2==0 && i==0){
			i=n-1;
			//continue;
		}
		if(i==0){
			break;
		}
		cout << i << " ";
		}
	}
	
	
	return 0;
}