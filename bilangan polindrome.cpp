#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp != 0) {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    return (num == rev);
}

void printPalindrome(int n) {
    cout << "Palindrome numbers until " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPalindrome(n);
    return 0;
}