#include<bits/stdc++.h>
using namespace std;

int n;
int qu;
int ar[2][1001];

//void swap(int &a, int &b) {
//  // Lengkapi
//}

int main() {
  cin >> n;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < n; j++) {
      cin >> ar[i][j];
    }
  }

  cin >> qu;
  
  for (int i = 0; i < qu; i++) {
	char P[5], Q[5];
    int x, y;
    
    cin >> P >> x >> Q >> y;

    int p = P[0] - 'A';
    int q = Q[0] - 'A';
    x--;
    y--;
    swap(ar[p][x], ar[q][y]);
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < n; j++) {
      cout << ar[i][j];
      if (j+1 < n) {
        cout << " ";
      }
    }
    cout << endl;
  }
  
  return 0;
}