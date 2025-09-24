#include<bits/stdc++.h>
using namespace std;

int n, x, h, lompat[1000001];

int main(){
	cin >> n;
	while(n--){
		int lompatan=0;
		memset(lompat,0,sizeof(lompat));
		cin >> x >> h;
		for(int i=0; i<x; ++i){
			cin >> lompat[i];
		}
		sort(lompat, lompat+x, greater<int>());
		h-=lompat[0];
		lompatan+=lompat[0];
		if(h>0){
			int i=0;
			while(lompat[i+1]>=h){
				i++;
			}
			lompatan+=lompat[i];
		}
		cout << lompatan << endl;
	}
}