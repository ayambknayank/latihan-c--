#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	string t;
	int a, T=0, i=0, m=0, u=0, r=0;
	bool cek = true;
	
	while(n--){
		cin >> a >> t;
		if(a!=5){
			cout << "NO" << endl;
		}else{
			for(char s:t){
				if(s == 'T'){
					T++;
					if(T>1){
						cek = false;
						break;
					}
				}else if(s=='i'){
					i++;
					if(i>1){
						cek = false;
						break;
					}
				}else if(s=='m'){
					m++;
					if(m>1){
						cek = false;
						break;
					}
				}else if(s=='u'){
					u++;
					if(u>1){
						cek = false;
						break;
					}
				}else if(s=='r'){
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
			T=0, i=0, m=0, u=0, r=0;
		}
	}
}