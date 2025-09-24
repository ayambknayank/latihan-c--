#include<bits/stdc++.h>
using namespace std;

int cari(int kiri, int kanan){
	int teng = kiri;
	int res = 0;
	while(teng <= kanan){
		if(teng % 11 == 0){
			res++;
			teng++;
		}else if(teng % 12 == 0){
			teng++;
		}else{
			if(teng % 4 == 0){
				res++;
			}
			teng++;
		}
	}
	return res;
}

int main(){
    int a, b;
    cin >> a >> b;
    
    cout << cari(a, b);
    
    return 0;
}