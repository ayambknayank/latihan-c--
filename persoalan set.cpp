#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> data(n);
	for(int i=0; i<n; i++){
		cin >> data[i];
	}
	for(int i=0; i<n-k+1; i++){
		int q=i;
		vector<int> v(k);
		for(int p=0; p<k; p++){
			v[p]=data[q];
			q++;
		}
//		// uji sublarik
//		for(auto ii: v){
//			cout << ii << " ";
//		}
//		cout << endl;
//		
		unordered_set<int> beda (v.begin(), v.end());
		cout << beda.size() << endl;
		beda.clear();
	}
}