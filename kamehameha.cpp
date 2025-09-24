#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int f;
	string a, e;
	for(int i=0; i<n; i++){
		cin >> f;
		while(f--){
			a +="a";
			e +="e";
		}
		cout << "k" << a << "m" << e << "h" << a << "m" << e << "h" << a << endl;
		a="";
		e="";
	}
	
}