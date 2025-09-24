#include<bits/stdc++.h>
using namespace std;

void genap(int arr[], int n){
	int x=n-1;
	for(int i=0; i<(n/2); i++){
			cout << arr[i] << " ";
			cout << arr[x] << " ";
			x--;
	}
}

int n, t, positif, nol, negatif, ganci[101];

int main(){
	cin >> t;
	for(int tes=0; tes<t; tes++){
		positif=0, nol=0, negatif=0;
		memset(ganci, 101, sizeof(ganci));
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> ganci[i];
			if(ganci[i]==0){
				nol++;
			}else if(ganci[i]>0){
				positif++;
			}else{
				negatif++;
			}
		}
		sort(ganci, ganci+n);
		if(n%2==1){
			if(negatif==(n/2) || nol==(n/2)){
				int x=n-1;
				for(int i=0; i<(n/2); i++){
						cout << ganci[x] << " ";
						cout << ganci[i] << " ";
						x--;
				}
				cout << ganci[(n/2)];
				cout << endl;
			}else{
				int x=n-1;
				for(int i=0; i<(n/2); i++){
						cout << ganci[i] << " ";
						cout << ganci[x] << " ";
						x--;
				}
				cout << ganci[(n/2)];
				cout << endl;
			}
		}else{
			if(nol==(n/2) || negatif==(n/2) || positif==(n/2)){
				genap(ganci, n);
				cout << endl;
			}else if(nol==n || negatif==n || positif==n){
				for(int i=0; i<n; i++){
					cout << ganci[i] << " ";
				}
				cout << endl;
			}else{
				cout << "mustahil";
				cout << endl;
			}
		}
	}
	return 0;
}