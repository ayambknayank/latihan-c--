#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main() {
  string text = "Hello World!";
  for (char c : text) {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(100));
  }
  cout << endl;
  return 0;
}
