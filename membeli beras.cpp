#include<bits/stdc++.h>
using namespace std;

void terbesar(pair<double, double> arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j].first < arr[j+1].first){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n, max, a=2;
    cin >> n >> max;

    double berat[n], harga[n];
    for(int i=0; i<n; i++){
        cin >> berat[i];
        berat[i] *= 1.00000;
    }
    for(int i=0; i<n; i++){
        cin >> harga[i];
        harga[i] *= 1.00000;
    }
    pair<double, double> perkilo[n];
    for(int i=0; i<n; i++){
        perkilo[i].first = harga[i] / berat[i];
        perkilo[i].second = berat[i];
    }

    terbesar(perkilo, n);

    double total = 0;
    int kilo = 0;
//    for(int i=0; i<n; i++){
//        cout << perkilo[i].first << endl;
//    }

    int hitung = 0;
    while(max > 0 && hitung < n){
        for(int i=perkilo[hitung].second; i>0; i--){
            total += perkilo[hitung].first;
            kilo++;
            max--;
            if(max == 0){
                break;
            }
        }
        hitung++;
    }

    cout << fixed << setprecision(5) << total << endl;

    return 0;
}