#include <iostream>
#include <string>
using namespace std;

string biner(int n) {
    string baru="";
    if(n%2==0){
        baru+="0";
    }else{
        baru+="1";
    }
    n%=2;
    if(n==0){
        return baru;
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << biner(0) << endl;
    cout << biner(1) << endl;
    cout << biner(512) << endl;
    cout << biner(1697) << endl;
    cout << biner(1048575) << endl;
}
