#include <iostream>
#include <algorithm>
using namespace std;

void cek(int arr[], int n) {
    while (true) {
        bool swapped = false;
        for (int i = 2; i < n; i++) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int t;
        cin >> t;

        int arr[t + 1];
        for (int i = 1; i <= t; i++) {
            cin >> arr[i];
        }

        cek(arr, t);

        bool urut = true;
        for (int i = 1; i <= t; i++) {
            if (arr[i] != i) {
                urut = false;
                break;
            }
        }

        if (urut) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
