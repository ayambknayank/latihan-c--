#include<bits/stdc++.h>
using namespace std;

long long n, x, y, z, pembagi;

int main(){
	cin >> n;
	while(n--){
		cin >> x >> y >> z;
		if(z-z%x+y<=z){
			cout << z-z%x+y << endl;
		}else{
			cout << z-z%x-(x-y) << endl;
		}
	}
	return 0;
}