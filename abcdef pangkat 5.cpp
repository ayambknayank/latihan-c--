#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n;
	while(n--){
		cin >> t;
		cout << (t>=72) + (t>=94) + (t>=107) + (t>=144) + (t>=188) << endl; 
	}
}