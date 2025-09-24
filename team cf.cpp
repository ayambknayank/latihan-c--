#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, yakin=0;

int main(){
	cin >> n;
	while(n--){
		cin >> a >> b >> c;
		if(a+b+c>1){
			yakin++;
		}
	}
	cout << yakin << endl;
}