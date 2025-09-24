#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int i=1, f;
	while(n--){
		cin >> f;
		while(i*i<=f){
			i++;
		}
		i--;
		cout << i << "^2" << " = " << i*i << endl;
		i=1;
	}
}