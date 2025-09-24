#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int jml=0;
        int vec[300]; 
        memset(vec, 0, sizeof(vec));

        int angka;
        if(s[0]=='>'){
            angka=150; 
            vec[angka]++;
        }else{
            angka=151; 
            vec[angka]++;
        }
        for(int i=0; i<n; i++){ 
            if(s[i]=='>'){
                angka--;
                vec[angka]++;
            }else{
                angka++;
                vec[angka]++;
            }
            cout << endl;
        	cout << angka << endl;
        }
        for(int i=1; i<=300; i++){ 
            if(vec[i]>0){
                jml++;
            }
        }
        
        cout << endl;
		cout << jml << endl;
    }
}
