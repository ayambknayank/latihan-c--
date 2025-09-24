#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n, k;
	cin >> n >> k;
	int jam = 20+(k/60);
	int menit = k%60;
	int soal = 0;
	for(int i=1; i<=n; i++){
		menit += (i*5);
		if(menit>=60){
			jam++;
			menit=menit%60;
		}
		if((jam*60) + menit <= 1440)soal++;
		else break;
	}
	cout << soal;
}