#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int hasil[100];
	int jml=0, p=0;
	int hadiah = 1;
	for(int i=19; i>=0; i--){
		if(n>=pow(3,i)){
			hasil[p] = pow(3,i);
			n-=hasil[p];
			jml++;
			p++;
		}
	}
	sort(hasil, hasil+p);
	cout << jml << endl;
	for(int i=0; i<p; i++){
		cout << hasil[i] << " ";
	}
	
}