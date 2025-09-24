#include<bits/stdc++.h>
using namespace std;

int main(){
    int hari, n, m, k, guna=0;
    cin >> n >> m >> k;
    vector<int> botol(n);
    for(int i=0; i<n; i++){
        cin >> botol[i];
    }
    sort(botol.begin(), botol.end());
    hari=m;
    int i = 0;
    for (int i=0; i<n; i++) {
        if(m+k < botol[i]){
        	guna++;
        	m=botol[i];
		}
    }
    cout << guna << endl;
    return 0;
}
