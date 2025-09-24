#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, masuk;
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> masuk;
		masuk += i;
		cout << masuk;
	}
}