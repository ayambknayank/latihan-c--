#include <iostream>
using namespace std;

int n, m;
int matriks[105][105];

int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> matriks[i][j];
    }
  }
  
  int kode=0;
  for (int i = 1; i <= m; i++) {
    for (int j = n; j >= 1; j--) {
      cout << matriks[j][i] << " ";
    }
    cout << endl;
  }
}