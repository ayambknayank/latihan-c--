#include<bits/stdc++.h>
using namespace std;

const int maxs = 1e9;
vector<bool> angka(maxs, false);

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        angka[x] = true;
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        if(angka[x]){
            cout << x << endl;
            angka[x]=false;
        }else{
            int temp = x - 1;
            while(temp > 0 && !angka[temp]){
                temp--;
            }
            if(temp > 0){
                cout << temp << endl;
                angka[temp]=false;
            }else{
                cout << -1 << endl;
            }
        }
    }
    return 0;
}