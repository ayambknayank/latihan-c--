#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
	cin >> s;
	for(char &a:s){
		a = toupper(a);
		break;
	}
	cout << s;
}