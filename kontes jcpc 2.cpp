#include<bits/stdc++.h>
using namespace std;

unordered_set<int> digit;

bool cek(int x){
    vector<int> angka;
    while(x>0){
        angka.push_back(x%10);
        x/=10;
    }
    for(int j:angka){
        if(digit.find(j) == digit.end()){
            return false;
        }
    }
    for(int j:digit){
        bool found = false;
        for(int i:angka){
            if(i == j){
                found = true;
                break;
            }
        }
        if(!found){
            return false;
        }
    }
    return true;
}

int main(){
    int n, m;
    cin >> n >> m;
    digit.reserve(n);
    for(int i=0; i<n; i++){
        int x; cin >> x;
        digit.insert(x);
    }
    int angka = 0;
    while(angka < 1000001){
        angka += m;
        if(cek(angka)){
            cout << angka << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}