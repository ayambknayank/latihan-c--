#include <bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int r, c;
vector<string> tetris;

bool all_one(int n){
	for(int i=0; i<c; i++){
		if(tetris[n][i] == '0'){
			return false;
		}
	}
	return true;
}

void nol(int n){
	for (int i=0; i<c; i++) {
        tetris[n][i] = '0';
    }
}

int main() {
    bismillah
    cin >> r >> c;
    string x;
    for (int i=0; i<r; i++) {
        cin >> x;
		tetris.push_back(x);
    }
    cout << endl;
    while(true){
    	int bawah=-1;
	    for (int i=0; i<r; i++) {
	        if(all_one(i)){
	        	bawah=i;
	        	nol(i);
			}
	    }
	    if(bawah==-1){
	    	break;
		}
		for(int i=0; i<c; i++){
			int pbawah = r, satu=0;
			//cari paling bawah yang mentok
			for(int j=bawah; j<r; j++){
				if(tetris[j][i]=='1'){
					pbawah=j;
					break;
				}
			}
			//jumlah kan nilai 1 yang ditemukan di atas paling bawah
			for(int j=pbawah-1; j>=0; j--){
				if(tetris[j][i]=='1'){
					tetris[j][i]='0';
					satu++;
				}
			}
			// bangun ulang tetris baru
			for(int j=pbawah-1; satu!=0; j--){
				tetris[j][i]='1';
				satu--;
			}
		}
	}
    
    for (int i=0; i<r; i++) {
        cout << tetris[i] << endl;
    }

    return 0;
}
