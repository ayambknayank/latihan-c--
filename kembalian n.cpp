#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int t;cin >> t;
	while(t--){
		int a, b, n, s;
		cin >> a >> b >> n >> s;
//		if((a*n)+b==s){
//			cout << "YES" << endl;
//		}else{
//			cout << "NO" << endl;
//		}
//		while(a--){
//			if(s-n>=0){
//				s-=n;
//			}else{
//				break;
//			}
//		}
//		if(s==0){
//			cout << "YES" << endl;
//		}else{
//			if(s<=b){
//				cout << "YES" << endl;
//			}else{
//				cout << "NO" << endl;
//			}
//		}
		if (s%n <= b && 1ll * a*n+b >= s) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;;
		}
	}
}