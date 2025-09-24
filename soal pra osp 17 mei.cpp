#include <iostream>
#include <cctype> // Untuk isupper()
using namespace std;

int main() {
    char ch;
    cout << "Masukkan sebuah karakter: ";
    cin >> ch;

    if (isupper(ch)) {
        cout << "Karakter '" << ch << "' adalah huruf kapital." << endl;
    } else {
        cout << "Karakter '" << ch << "' bukan huruf kapital." << endl;
    }

    return 0;
}
