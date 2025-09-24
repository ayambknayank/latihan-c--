#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	vector<long long> tugas(m);
	for(int i=0; i<m; i++){
		cin >> tugas[i];
	}
	long long count=tugas[0]-1;
	for(int i=1; i<m; i++){
		if(tugas[i]<tugas[i-1]){
			count+=n-tugas[i-1]+tugas[i];
		}else{
			count += tugas[i]-tugas[i-1];
		}
	}
	cout << count << endl;
}