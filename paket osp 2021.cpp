#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x,y,n,j;
	vector<long long> p;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> x;
		j=lower_bound(p.begin(), p.end(), x)- p.begin();

		if (j!=p.size()){
			p[j] = x;
		}else{
			p.push_back(x);
		}
	}
	cout << p.size() << endl;
	
	return 0;
}