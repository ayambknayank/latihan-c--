#include<bits/stdc++.h>
using namespace std;

int n, batu=0;
char c, tes;

int main(){
	cin >> n >> tes;
	for(int i=1; i<n; i++){
		cin >> c;
		if(c==tes){
			batu++;
		}
		tes=c;
	}
	cout << batu << endl;
}