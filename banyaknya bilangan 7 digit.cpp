#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

bool isNonDecreasing(int num) {
    int prevDigit = num % 10;
    num /= 10;
    while (num > 0) {
        int currDigit = num % 10;
        if (currDigit > prevDigit)
            return false;
        prevDigit = currDigit;
        num /= 10;
    }
    return true;
}

int main() {
	bismillah
    int count = 0;
    for (int num = 1111111; num <= 9999999; ++num) {
        if (isNonDecreasing(num)) {
            cout << num << endl;
            count++;
        }
    }
    cout << "Total bilangan 7 digit dengan digit tidak menurun adalah: " << count << endl;
    return 0;
}
