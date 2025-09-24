#include <iostream>
using namespace std;

int main(){
	int n, f[101];
	int tuna=0;
	int hasil;
	int hasil1=0;
	int udang=0;
	cin >> n;
	
	for (int i=0; i<n; i++){
		cin >> f[i];
	}
	
	for(int i=0; i<n;i++){
		if(f[i]==1){
			tuna++;
			if(f[i]!=f[i+1]){
				if(udang>0){
				if(udang<tuna){
					hasil=udang*2;
					tuna=0;
				}else if(tuna<udang){
					hasil=tuna*2;
					udang=0;
				}else{
					hasil=tuna*2;
					tuna=0;
					udang=0;
				}
				if(hasil>hasil1){
					hasil1=hasil;
				}
			}
				
			}
			
		}
		if(f[i]==2){
			udang++;
			if(f[i]!=f[i+1]){
				if(tuna>0){
				if(tuna>0){
				if(udang<tuna){
					hasil=udang*2;
					tuna=0;
				}else if(tuna<udang){
					hasil=tuna*2;
					udang=0;
				}else{
					hasil=tuna*2;
					tuna=0;
				if(hasil>hasil1){
					hasil1=hasil;
				}
			}
				
			}
			
			}
		}

	}
	
	cout << hasil1;
	
	return 0;
}