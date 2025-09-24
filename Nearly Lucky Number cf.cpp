#include<bits/stdc++.h>
using namespace std;

long long n,lucky=0;
string s;

int main(){
	cin >> n;
	s = to_string(n);
	for(char a:s){
		if(a=='7' || a=='4'){
			lucky++;
		}
	}
	if(lucky==7 || lucky==4){
		cout << "YES";
	}else{
		cout << "NO";
	}
}