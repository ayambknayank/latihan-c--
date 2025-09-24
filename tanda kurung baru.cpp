#include<bits/stdc++.h>
using namespace std;

int main(){
	string kurung;
	cin >> kurung;
	
	int total=0;
	while(kurung.find("()") != string::npos){
		kurung.replace(kurung.find("()"), 2, ""); 
        total += 2;
	}	
	
	cout << total;
}