#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int langkah = 1;
    int jejak = x;
    x=(a*x+b)%c;
    while(jejak!=x) {
    	x=(a*x+b)%c;
        langkah++;
    }
    cout << langkah;
    return 0;
}