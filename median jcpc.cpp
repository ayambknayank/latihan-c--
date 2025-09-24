#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n; cin >> n;
    priority_queue<int> kiri;
    priority_queue<int, vector<int>, greater<int>> kanan; 
    
	for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        
        if(kiri.empty() || x <= kiri.top()) {
            kiri.push(x);
        } else {
            kanan.push(x);
        }

        if(kiri.size() > kanan.size() + 1) {
            kanan.push(kiri.top());
            kiri.pop();
        } else if(kanan.size() > kiri.size()) {
            kiri.push(kanan.top());
            kanan.pop();
        }

        if(kiri.size() == kanan.size()) {
            double median = (kiri.top() + kanan.top()) / 2.0;
            cout << median << endl;
        } else {
            cout << kiri.top() << endl;
        }
    }
}
