#include<bits/stdc++.h>
using namespace std;

int n;
string s;
string coba[6]={"abc", "acb", "bac", "bca", "cba", "cab"};
bool cek;

int main(){
	cin >> n >> s;
	for(int i=0; i<6; i++){
		cek=1;
		for(int j=0; j<n; j++){
			if(s[j]!='.' && s[j]!=coba[i][j%3]){
				cek=0;
				break;
			}
		}if(cek){
			for(int j=0; j<n; j++){
				cout << coba[i][j%3];
			}
			return 0;
		}
	}
	cout << -1;
}