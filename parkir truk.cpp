#include<bits/stdc++.h>
using namespace std;

int main(){
	int mnt[101], a, b, c;
	
	cin >> a >> b >> c;
	for(int i=0; i<100; i++){
		mnt[i]=0;
	}
	
	for(int i=0; i<3; i++){
		int x, y;
		cin >> x >> y;
		for(int j=x; j<y; j++){
			mnt[j]++;
		}
	}
	int hasil=0;
	for(int i=0; i<101; i++){
		if(mnt[i]==1){
			hasil+=a;
		}
		if(mnt[i]==2){
			hasil+=2*b;
		}
		if(mnt[i]==3){
			hasil+=3*c;
		}
	}
	cout << hasil;
}