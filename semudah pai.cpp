#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s = "hai";
	for(int i=0; i<n; i++){
		cout << s[i%3];
	}
}