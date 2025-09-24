#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	string s;
	cin >> s;
	int n=s.length();
	int hasil = 0;
	for(int i=0; i<n; i++){
		if(s[i]=='Q'){
			for(int ii=i; ii<n; ii++){
				if(s[ii]=='A'){
					for(int iii=ii; iii<n; iii++){
						if(s[iii]=='Q'){
							hasil++;
						}
					}
				}
			}
		}
	}
	cout << hasil << endl;
}