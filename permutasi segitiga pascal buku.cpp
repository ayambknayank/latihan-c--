#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void precomputecombination(int n){
	int c[n+1][n+1];
	for(int i=0; i<=n; i++){
		c[i][0]=1;					//untuk mengisi pinggiran segitiga dengan 1
		for(int j=1; j<=i-1; j++){
			c[i][j]=c[i-1][j-1] + c[i-1][j];	//untuk manambahkan angka di baris selanjutnya
		}
		c[i][i]=1;					//untuk mengisi pinggiran paling kanan
	}
	for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
	int n;
	cin >> n;
	precomputecombination(n);
}