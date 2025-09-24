#include<iostream>
using namespace std;
int n, a,b, c;

int main(){
	cin >> n;
	while(n--){
		cin >> a >> b >> c;
		if(c==a){
			cout << b << endl;
		}else if(c==b){
			cout << a << endl;
		}else{
			cout << c << endl;
		}
	}
	return 0;
}