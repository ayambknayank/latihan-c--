#include <iostream>
using namespace std;
int main() {

	int n;
	int arr [100];

	while (cin >> n) {
		for (int i=0; i<100; i++) {
			cin >> arr[i];
		}

		for (int i=n-1; i>=0; i--) {
			cout << arr[i]<< endl;

		}
	}

	return 0;
}