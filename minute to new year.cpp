#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;
	
	int h, m, hasil;
	while(n--){
		cin >> h >> m;
		if(24-h>=0){
			if(60-m<60){
				hasil = ((24-h-1)*60)+60-m;
			}else{
				hasil = (24-h)*60;
			}
		}
		cout << hasil << endl;
	}
}