#include<bits/stdc++.h>
using namespace std;

int n, x;

int main(){
	cin >> n;
	while(n--){
		int hasil[10]={0}, i=0;
		cin >> x;
		if(x>=10000){
			i++;
			hasil[i]=x/10000*10000;
			x%=10000;
		}if(x>=1000){
			i++;
			hasil[i]=x/1000*1000;
			x%=1000;
		}if(x>=100){
			i++;
			hasil[i]=x/100*100;
			x%=100;
		}if(x>=10){
			i++;
			hasil[i]=x/10*10;
			x%=10;
		}if (x>=1){
			i++;
			hasil[i]=x;
		}
		
		cout << i << endl;
		for(int j=i; j>=1; j--){
			cout << hasil[j] << " ";
		}
		cout << endl;
	}
}