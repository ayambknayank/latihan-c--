#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int t;cin >> t;;
	while(t--){
		int n;cin >> n;int jml=0;
		bool cek=false;
		int x;
		for(int i=0; i<n; i++){
			cin >> x;
			jml+=x;
			if(x%3==1){
				cek=true;
			}
		}
		if(jml%3==0){
			cout << 0 << endl;
		}else if(jml%3==2){
			cout << 1 << endl;
		}else{
			if(cek==true){
				cout << 1 << endl;
			}else{
				cout << 2 << endl;;
			}
		}
	}
}