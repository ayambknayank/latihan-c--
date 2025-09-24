#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a;
	cin >> n;
	int t[n+2], q[n+2];
	for(int i=1;i<=n; i++){
		cin >> a;
		t[i]=i;
		swap(t[i], t[a]);
	}
	for(int i=1; i<=n; i++){
		q[t[i]]=i;
	}
	for(int i=1; i<=n; i++){
		cout << q[i] << " ";
	}
}