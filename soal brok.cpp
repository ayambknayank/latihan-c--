#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	string hasil;
	int bintang=0;
	for(char a:s){
		if(bintang%2==0){
			if(a=='*'){
				bintang++;
				continue;
			}
			hasil+=a;
		}
		if(a=='*'){
			bintang++;
		}
	}
	cout << hasil << endl;
}