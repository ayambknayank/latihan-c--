#include<bits/stdc++.h>
using namespace std;

int kunci(int x){
    if(x==0){
        return 0;
    } else if((x/4)*4==x){
        return kunci(x/4);
    } else {
        return (x-(x/4)*4)*7 + kunci(x/4);
    }
}

int main(){
    int x;
    cin >> x;
    int hasil = kunci(x);
    cout << hasil;
    return 0;
}
