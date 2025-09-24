#include<bits/stdc++.h>
using namespace std;

int t;
long long a, b;
int main(){
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> a >> b;
		
		bool cek = true;
		while(a<b && cek){
			if(a==b){
				cek=false;
				break;
			}
			a+=7;
			b-=5;		
		}
		if(a==b){
			cout << "Case #" << i+1 << ": " << a << endl;
		}else{
			cout << "Case #" << i+1 << ": " << "impossible" << endl;
		}
	}
}