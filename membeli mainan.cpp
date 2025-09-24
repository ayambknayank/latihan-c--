#include<bits/stdc++.h>
using namespace std;

int x, a[3], mainan;

int main(){
	cin >> x;
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
	mainan = x/(a[0]+ a[1]+ a[2]);
	x-=((a[0]+ a[1]+ a[2])*mainan);
	mainan*=3;
	for(int i=0; x>0; i++){
		if(x-a[i%3]>=0){
			x-=a[i%3];
			mainan++;
		}else{
			break;
		}
	}
	cout << mainan;
}