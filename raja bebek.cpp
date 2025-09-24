#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int n, y;
	cin >> n >> y;
	int jml=0;
	vector<int> pizza(n);
	for(int i=0; i<n; i++){
		cin >> pizza[i];
		jml+=pizza[i];
	}
	sort(pizza.begin(), pizza.end(), greater<int>());
	int t=n-1;
	int hasil=0;
	if(jml<=y){
		cout << -1 << endl;
		return 0;
	}
	int i=0;
	for(; i<n; i++){
		hasil+=pizza[i];
		if(hasil>=y)break;
	}
	cout << i+1 << endl;
	return 0;
}