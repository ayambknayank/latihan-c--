#include<bits/stdc++.h>
using namespace std;

int triple(int a, int b, int c){
    return a + (b * c);
}

int main(){
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(i == j || i == k || j == k){
                    continue;
                }
                if(j * k > n - i){
                    break;
                }
                if(triple(i, j, k) == n){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}