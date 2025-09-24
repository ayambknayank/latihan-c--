#include<bits/stdc++.h>
using namespace std;

string s;
int urut[1001], i=0;

int main(){
	cin >> s;
	for(char a:s){
		if(a=='+'){
			continue;
		}else{
			urut[i] = a-'0';
			i++;
		}
	}
	sort(urut, urut+i);
	
	for(int j=0; j<i; j++){
		if(j==i-1){
			cout << urut[j];
		}
		else {
			cout << urut[j] << "+";
		}
	}
}