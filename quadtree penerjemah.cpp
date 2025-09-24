#include<iostream>
using namespace std;

int m[128][128];

void qdt(int r, int c, int k, string s){
	if(s.length() == 1 && s[0]=='1'){
		for(int i=r; i<r+k; i++){
			for(int j=c; j<c+k; j++){
			m[i][j] = 1;
			}
		}
	}else{
		if(s[1]=='0'){
			qdt(r,c,k/2, s.erase(1,1));
		}else if(s[1]=='1'){
			qdt(r,c+(k/2),k/2, s.erase(1,1));
		}else if(s[1]=='2'){
			qdt(r+(k/2),c,k/2, s.erase(1,1));
		}else if(s[1]=='3'){
			qdt(r+(k/2),c+(k/2),k/2, s.erase(1,1));
		}
	}
}

int main(){
	int n, c, r;
	cin >> n;
	string jawaban[n];
	for(int i=0; i<n; i++){
		cin >> jawaban[i];
	}
	
	cin >> r >> c;
	
	int mRc = max(r, c);
	int pow1 = 1;
	while (pow1 <mRc){
		pow1*=2;
	}
	
	for(int i=0; i<n; i++){
		qdt(0, 0, pow1, jawaban[i]);
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout << m[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}