#include <bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
    bismillah
    int n;
    cin >> n;
    
    vector<pair<int, int>> jam(n);
    
    for(int i = 0; i < n; i++){
        cin >> jam[i].first >> jam[i].second;
    }
    
    
    sort(jam.begin(), jam.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    int pilih = 0;  
    int selesai = 0;  
    
    for(int i = 0; i < n; i++){
        if(jam[i].first >= selesai){  
            selesai = jam[i].second;  
        }
    }
    
    cout << pilih << endl; 
}
