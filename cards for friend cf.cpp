#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int t, w, h, n;

int main(){
	cin >> t;
	while(t--){
		cin >> w >> h >> n;
		int kertas = 1;
		if(n==1){
			cout << "yes" << endl;
			continue;
		}
		if(w%2==1 && h%2==1){
			cout << "no" << endl;
			continue;
		}
		bool cek = false;
		while(true){
			if(w%2==0){
				w/=2;
				kertas*=2;
			}else if(h%2==0){
				h/=2;
				kertas*=2;
			}
			if(w%2==1 && h%2==1){
				break;
			}
//			if(kertas>=n){
//				cek = true;
//				break;
//			}
		}
		if(kertas >= n){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	return 0;
}