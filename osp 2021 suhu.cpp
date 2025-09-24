#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int gcd(int n, int f){
	if(f==0) return n;
	else return gcd(f, n%f);
}

void bubblesort(string arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				string temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int n, m, a, b, q;
	cin >> n >> m >> a >> b >> q;
	
	int s, t;
	string suhu[n*m];
	int tanya[1000];
	for(int i=1; i<=q; i++){
		cin >> tanya[i];
	}
	
	int awal = 0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			s = b+j;
			t = a+i;
			if(gcd(s,t)!=1){
				s=s/gcd(s,t);
				t=t/gcd(s,t);
			}
			suhu[awal] = to_string(s) + "/" + to_string(t);
			awal++;
		}
	}
	
	bubblesort(suhu, n*m);
	
	for(int i=0; i<q; i++){
		cout << suhu[tanya[i]] << endl;
	}
	
	return 0;
}