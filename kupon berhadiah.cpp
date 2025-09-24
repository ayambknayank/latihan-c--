#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n, x;
	cin >> n >> x;
	int hasil;
	cin >> hasil;
	for(int i=1; i<n ;i++){
		int kupon;
		cin >> kupon;
		if(abs(x-kupon) < abs(x-hasil)){
			hasil = kupon;
		}else if(abs(x-kupon) == abs(x-hasil)){
			hasil = min(hasil, kupon);
		}
	}
	cout << hasil << endl;
}