#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);


int main(){
	int t;
	cin >> t;
	//vector<string> nama(t);
	string nama[t+1];
	for(int i=1; i<=t; i++){
		cin >> nama[i];
		string s = nama[i];
		sort(nama+1, nama+1+i);
		for(int j=1; j<=i; j++){
			if(nama[j]==s){
				cout << j << endl;
			}
		}
	}
}