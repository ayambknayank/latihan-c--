#include<bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n; cin >> n ;
	string a, b;
	cin >> a >> b;
	int operasi=0;
	int ans=0;
	for(int i=0; i<n; i++){
		if(a[i] > b[i]){
			ans++;
			swap(a[i], b[i]);
			continue;
		}
		if(ans>0 && a[i] < b[i]){
			operasi++;
			ans=0;
		}
		
	}
	if(ans>0){
		operasi++;
		ans=0;
	}
	//cout << a << endl << b << endl;
	cout << operasi << endl;
}