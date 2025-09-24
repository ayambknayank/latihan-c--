#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	int kaki[n], ukuran[m];
	for(int i=0; i<n; i++){
		cin >> kaki[i];
	}
	
	for(int i=0; i<m; i++){
		cin >> ukuran[i];
	}
	
	sort(kaki, kaki+n);
	sort(ukuran, ukuran+m);
	int hasil = 0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(kaki[j]==ukuran[i]||kaki[j]==ukuran[i]-1){
				hasil++;
				kaki[j]=0;
				break;
			}
		}
	}
	cout << hasil << endl;
	
	return 0;
}