#include<bits/stdc++.h>
using namespace std;

int a[1001], b[1001];

void sulap(char a, int x, char b, int y){
	if(a == 'A' && b == 'B'){
		swap(a[x], b[y]);
	}else if(a=='A' && b=='A'){
		swap(a[x], a[y]);
	}else if(a=='B' && b=='A'){
		swap(b[x], a[y]);
	}else if(a=='B' && b=='B'){
		swap(b[x], b[y]);
	}
}

int main(){
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	
	int t;
	cin >> t;
	while(t--){
		int x, y;
		char c,d;
		cin >> c >> x >> d >> y;
		sulap(c, x, d, y);
	}
	
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i=0; i<n; i++){
		cout << b[i] << " ";
	}
	cout << endl;
	
	return 0;
}
