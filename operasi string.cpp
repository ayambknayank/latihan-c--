#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	
	size_t pos = s1.find(s2);
	s1.erase(pos, s2.length());
	
	pos = s1.find(s3);
	s1.insert(pos + s3.length(), s4);
	
	cout << s1;
	
	return 0;
}