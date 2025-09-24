#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int t, warna[200];
string a, b;

int main(){
	cin >> t;
	while(t--){
		int beda=0;
		memset(warna, 0, sizeof(warna));
		cin >> a >> b;
		for(auto c:a){
			int w = int(c);
			if(warna[w] > 0){
				warna[w]++;
			}else{
				beda++;
				warna[w]++;
			}
		}
		for(auto c:b){
			int w = int(c);
			if(warna[w] > 0){
				warna[w]++;
			}else{
				beda++;
				warna[w]++;
			}
		}
		cout << beda-1 << endl;
	}
}