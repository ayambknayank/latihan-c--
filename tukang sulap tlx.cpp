#include <iostream>
using namespace std;

int n;
int t;
int ar[2][1001];

//int tukar(int a, int b) {
//  int temp=a;
//  a=b;
//  b=temp;
//}

int main() {
  cin >> n;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < n; j++) {
      cin >> ar[i][j];
    }
  }

  cin >> t;
  for (int i = 0; i < t; i++){
  	
    char buff1[5], buff2[5];
    int x, y;
    
    cin >> buff1 >> x >> buff2 >> y;

    int p = buff1[0] - 'A';
    int q = buff2[0] - 'A';
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
    cout << endl;;
  }
}