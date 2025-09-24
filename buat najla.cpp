#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main (){
	
	
	string a = "hai kamuuu, gimana hari ini?";
	
	string b = "udah makan belum?";
	//cin >> b;
	
	
	
	for (char c : a, b) {
    cout << c << flush;
    this_thread::sleep_for(chrono::milliseconds(100));
  }
  cout << endl;
}