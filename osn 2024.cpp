#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> data;
    
    int x;
    cin >> x;
    
    int besar = x;
    int kecil = x;
    double rata = x * 1.0;
    long long jumlah = x;
    
    data.push_back(x);
    cout << kecil << " " << besar << " " << fixed << setprecision(4) << rata << endl;
    
    for(int i = 1; i < n; i++){
    	besar++; kecil++;
        cin >> x;
        jumlah += x;
        jumlah += i;
        
        besar = max(besar, x);
        kecil = min(kecil, x);
        
        data.push_back(x);
        rata = (jumlah * 1.0000) / data.size();
        
        cout << kecil << " " << besar << " " << fixed << setprecision(4) << rata << endl;
    }
    
    return 0;
}