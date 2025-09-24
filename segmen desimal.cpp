#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--){
    	int n;cin >> n;
    	string baru="";
    	if(n%2==0){
    		for(int i=0; i<n/2; i++){
				baru+='1';
			}
		}else{
			baru+='7';
			for(int i=1; i<n/2; i++){
				baru+='1';
			}
		}
		cout << baru << endl;
	}
}