#include<bits/stdc++.h>
using namespace std;

int q = 0;
pair<int, int> jalan[100001];

void join(int a, int b){
    jalan[a].first = 1;
    jalan[b].second = 1;
}

bool cek(int a, int b){
    if(jalan[a].first == 1 && jalan[b].second == 1){
        return true;
    } else {
        return false;
    }
}

int main(){
    int n, q;
    cin >> n >> q;

    int kar, a, b;

    while(q--){
        cin >> kar >> a >> b;
        if(kar == 1){ // Change from kar = '1' to kar == 1
            join(a, b);
        } else if(kar == 2){ // Change from kar = '2' to kar == 2
            if(cek(a, b)){
                cout << "T" << endl;
            } else {
                cout << "Y" << endl;
            }
        }
    }

    return 0; // Added return statement
}
