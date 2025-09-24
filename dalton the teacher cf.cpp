#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, tukar;
    cin >> n;
    while (n--) {
        cin >> x;
        tukar = 0;
        bool cek[x + 1]; 
        fill(cek, cek + x + 1, true);
        for (int i = 1; i <= x; i++) {
            cin >> y;
            if (y == i) {
                tukar++;
            }
        }
        if(tukar%2==1){
        	cout << (tukar/2)+1 << endl;
		}else{
			cout << tukar/2 << endl;
		}
    }
    return 0;
}
