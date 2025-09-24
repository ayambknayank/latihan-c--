#include<bits/stdc++.h>
using namespace std;

int n, x;
string timur;

int main(){
	cin >> n;
	while(n--){
		cin >> x;
		cin >> timur;
		if(x!=5){
			cout << "NO" << endl;
			continue;
		}else{
			bool cek=true;
			int t=0, i=0, m=0, u=0, r=0;
			for(char a:timur){
				if(a=='T'){
					t++;
					if(t>1){
						cek = false;
						break;
					}
				}else if(a=='i'){
					i++;
					if(i>1){
						cek = false;
						break;
					}
				}else if(a=='m'){
					m++;
					if(m>1){
						cek = false;
						break;
					}
				}else if(a=='u'){
					u++;
					if(u>1){
						cek = false;
						break;
					}
				}else if(a=='r'){
					r++;
					if(r>1){
						cek = false;
						break;
					}
				}else{
					cek = false;
					break;
				}
			}
			if(cek){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}
	}
}