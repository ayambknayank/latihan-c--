//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	
//	int tinggi [n];
//	for(int i=1; i<=n; i++){
//		cin >> tinggi[i];
//	}
//	int hasil=0;
//	for(int i=1; i<=n; i++){
//		int skrg=tinggi[i];
//		while(i--){
//			if(tinggi[i-1]<=skrg){
//				hasil++;
//			}else{
//				break;
//			}
//		}
//		hasil++;
//	}
//	cout << hasil << endl;
//}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int tinggi[n];
    for (int i = 0; i < n; i++) {
        cin >> tinggi[i];
    }

    int hasil = 0;
    for (int i = 0; i < n; i++) {
        int skrg = tinggi[i];
        while (i > 0 && tinggi[i - 1] <= skrg) {
            i--;
        }
        int j = i;
        while (j < n && tinggi[j] <= skrg) {
            j++;
        }
        hasil += (j - i);
    }
    cout << hasil << endl;

    return 0;
}
