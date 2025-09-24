#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    int n;
    string perintah;
    cin >> n;

    int elemen;
    deque<int> urutan;
    for (int i = 0; i < n; i++) {
        cin >> perintah;
        
        

        if (perintah == "push_front") {
        	cin >> elemen;
            urutan.push_front(elemen);
        } else if (perintah == "push_back") {
        	cin >> elemen;
            urutan.push_back(elemen);
        } else if (perintah == "pop_front") {
            urutan.pop_front();
        } else if (perintah == "pop_back") {
            urutan.pop_back();
        }
    }

    // Menampilkan elemen-elemen pada deque
    for (int num : urutan) {
        cout << num << endl;
    }

    return 0;
}
