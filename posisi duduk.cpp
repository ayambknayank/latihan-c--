#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int m, a, b;
	cin >> m >> a >> b;
	if(a%2==1 && b%2==1){
		if(a+b==m*2){
			cout << "1 ";
		}else{
			cout << "0 ";
		}
	}
	else{
		cout << "0 ";
	}
	cout << min(a, b);
}