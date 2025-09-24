#include<bits/stdc++.h>
using namespace std;

string a, b;
int n, bajuA=0, bajuB=0;

int main(){
	cin >> n;
	while(n--){
		bajuA =0; bajuB=0;
		cin >> a >> b;
		for(char x:a){
			if(x=='S'){
				bajuA*=-1;
			}else if(x=='M'){
				bajuA+=2;
			}else if(x=='L'){
				bajuA+=3;
			}else if(x=='X'){
				bajuA+=10;
			}
		}
		for(char x:b){
			if(x=='S'){
				bajuB*=-1;
			}else if(x=='M'){
				bajuB+=2;
			}else if(x=='L'){
				bajuB+=3;
			}else if(x=='X'){
				bajuB+=10;
			}
		}
		//cout << bajuA << " " << bajuB << endl;
		if(bajuA > bajuB){
			cout << ">" << endl;
		}else if(bajuA < bajuB){
			cout << "<" << endl;
		}else if(bajuA == bajuB){
			cout << "=" << endl;
		}
	}
}