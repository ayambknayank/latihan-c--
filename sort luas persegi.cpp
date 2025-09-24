#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	while(n--){
		pair<int, int> x[4];
		int hasil1;
		cin >> x[0].first >> x[0].second;
		cin >> x[1].first >> x[1].second;
		cin >> x[2].first >> x[2].second;
		cin >> x[3].first >> x[3].second;
		
		sort(x, x+3);
		hasil1=abs(x[1].first - x[2].first);
//		cout << x[0].first << x[0].second;
//		cout << x[1].first << x[1].second;
//		cout << x[2].first << x[2].second;
//		cout << x[3].first << x[3].second;
//		cout << endl;
		int hasil2;
		if(x[1].second==x[2].second){
			hasil2=abs(x[1].second - x[3].second);
		}else{
			hasil2=abs(x[1].second - x[2].second);
		}
		
		
		cout << hasil1*hasil2 << endl;
	}
}