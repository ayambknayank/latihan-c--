#include<bits/stdc++.h>
using namespace std;


bool menang(char player, const char tac[int i][int j]) {
    for (int i = 0; i < 3; i++) {
        if ((tac[i][0] == player && tac[i][1] == player && tac[i][2] == player) ||
            (tac[0][i] == player && tac[1][i] == player && tac[2][i] == player)) {
            return true;
        }
    }

    if ((tac[0][0] == player && tac[1][1] == player && tac[2][2] == player) ||
        (tac[0][2] == player && tac[1][1] == player && tac[2][0] == player)) {
        return true;
    }

    return false;
}

int main(){
	int n;
	cin >> n;
	
	const char tic[5][5];
	int x=0;
	int o=0;
	bool bisa=true;
	while(n--){
		for(int i=1; i<=3; i++){
			for(int j=1; j<=3; j++){
				cin >> tic[i][j];
			}
		}
		
		for(int i=1; i<=3; i++){
			for(int j=1; j<=3; j++){
				if(tic[i][j]=='X'){
					x++;
				}else if(tic[i][j]=='O'){
					o++;
				}
			}
		}
		if(menang('O', tic) && x!=o+1 && !(menang('X', tic) && x!=o) ){
			if(x-o==1){
				cout << "yes" << endl;
			}else{
				cout << "no" << endl;
			}
		}else if(!(x==0 || x==o+1)){
				cout << "no" << endl;
		}
	}
	//x-o>1 false;
	//x<o false;
	//seri false;
	//jika x menang, x-o !=0 false;
}