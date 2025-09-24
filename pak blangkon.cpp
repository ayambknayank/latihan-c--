#include<bits/stdc++.h>
using namespace std;

int n, a, b, c;
// a = kekuatan pak blangkon
// b = super blangkon
// c = tambahan jika mengalahkan musuh
int main(){
	cin >> n >> a >> b >> c;
	
	int musuh[n];
	
	for(int i=0; i<n; i++){
		cin >> musuh[i];
	}
	
	sort(musuh, musuh+n);
	
	int kalah=0;
	int pakai=0;
	for(int i=0; i<n; i++){
		if(a>=musuh[i]){
			a+=c;
			kalah++;
		}else{
			if(a+b>= musuh[i]){
				a+=c;
				kalah++;
				pakai++;
			}
		}
	}
	
	cout << kalah << " " << pakai << endl;
}