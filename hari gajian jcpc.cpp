#include<bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

signed main(){
	bismillah
	int q; cin >> q;
	int n=q;
	int ans=0;
	pair<int, int> data[100];
	int bagi[] = {5, 2, 1};
	int y=0;
	int kali = 1;

	while(n>0){
		while(n/kali>=10){
			kali*=10; //untuk kali bil 5, 2, 1 terbesar
		}
		for(int i=0; i<3; i++){
			int pembagi = bagi[i]*kali;
			if(n/pembagi>0){
				data[y].first = pembagi;
				data[y].second = n/pembagi;
				y++;
				n-=pembagi*(n/pembagi);
			}
		}
		kali/=10;
	}
	cout << y << endl;
	for(int i=0; i<y; i++){
		cout << data[i].first << " " << data[i].second << endl;
	}
}