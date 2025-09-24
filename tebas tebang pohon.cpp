#include<bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL), cout.tie(NULL);
#define int long long

/*
10 25
4 2 9 9 5 3 6 7 2 10

5 5 
2 7 2 9 5

5 25
2 7 2 9 5

5 125
2 7 2 9 5

20 91
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
*/

signed main(){
	bismillah
	int n, m;
	cin >> n >> m;
	int jml=0;
//	vector<int> a(n);
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		jml+=a[i];
	}
	if(jml<m){
		cout << "-1" << endl;
		return 0;
	}else if(jml==m){
		cout << "0" << endl;
		return 0;
	}
	sort(a+1, a+n+1);
	int ans=0;
	int jawab =0;
	for(int i=n-1; i-1>=0; i--){
		if(a[i]==a[i-1]){
			continue; // kalau sama lanjut aja
		}else if(a[i]!=a[i-1]){
			
			int selisih = (a[i]-a[i-1]);
			int tebang = selisih * (n-i);
			if(m-tebang == 0){
				cout << a[i-1];
				return 0;
			}else if(m-tebang<0){
			//cout << "tes" << endl;
				for(int j=1; j<=selisih; j++){
					tebang = j*(n-i);
					if(m-tebang<0){
						cout << a[i-1]+j-2;
						return 0;
					}
				}
			}
			m-=tebang;
		}
	}
}