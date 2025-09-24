#include<bits/stdc++.h>
using namespace std;

string x, y;

int main(){
	cin >> x >> y;
	string zaldas = "lizaldas";
	if(x.find(y) == string::npos){
		cout << "YA" << endl;
		cout << x << endl;
	}else{
		cout << "TIDAK" << endl;
	}
	return 0;
}