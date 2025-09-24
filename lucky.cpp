#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	int t; string s;
	cin >> t;
	while(t--){
		int awal=0, akhir=0;
		cin >> s;
		int i=1, x;
		for(auto a:s){
			if(i<=3){
				x = a-'0';
				awal+=x;
			}else{
				x = a-'0';
				akhir+=x;
			}
			i++;
		}
		if(awal==akhir){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;	
		}
	}
}