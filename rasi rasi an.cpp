#include<bits/stdc++.h>
using namespace std;

#define int long long

double gradien(int a, int b, int aa, int bb){
    if (aa - a == 0) return INFINITY; // handle vertical line
    return (double)(bb - b) / (aa - a);
}

double ygaris(double m, int a, int b){
    return m * a + b;
}

void solve(int i){
    int xm, ym, xn, yn, xo, yo;
    cin >> xm >> ym >> xn >> yn >> xo >> yo;
    cout << "Case #" << i << ": ";
    
    double grad = gradien(xm, ym, xn, yn);
    double titik = ygaris(grad, xo, yo - grad * xo);
    
    if (yo == titik){
        cout << "rasi ular" << endl;
    } else if (yo < titik){
        cout << "rasi anjing" << endl;
    } else {
        cout << "rasi kucing" << endl;
    }
}

signed main(){
    int q;
    cin >> q;
    for(int i=1; i<=q; i++){
        solve(i);
    }
}