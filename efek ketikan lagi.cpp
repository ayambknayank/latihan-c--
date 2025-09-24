#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

void typeWriterEffect(string text) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(10)); // jeda 50ms
    }
}

int main() {
    string strings[] = {//L
	"love you\n"  "love you\n" , "love you\n" , "love you\n" , "love you\n" , "love you\n" , "love you\n" , "love you\n" , "love you " , "love you " , "love you\n" , "love you " , "love you " , "love you\n" , "love you " , "love you " , "love you\n\n\n",
	
	//O
	 "love you " , "love you " ,  "love you\n" , "love you " , "love you " , "love you\n" , "love you" , "          " , "love you\n" , "love you" , "          " ,  "love you\n" , "love you" , "          " , "love you\n" , "love you" , "          " ,  "love you\n" , "love you" , "          " , "love you\n" , "love you" , "          " , "love you\n" , "love you " , "love you " , "love you\n" , "love you " , "love you " , "love you\n\n\n",
	
	//V
	 "love you                love you\n" , " love you              love you\n" , "  love you            love you\n" , "   love you          love you\n"  "    love you        love you\n" , "     love you      love you\n"  "      love you    love you\n" , "       love you love you\n" , "        love you love u\n" , "         love you love\n\n\n",
	
	//E
	 "love you " , "love you " , "love you\n" , "love you " , "love you " , "love you\n" , "love you\n" , "love you\n" , "love you " , "love you " , "love you\n" , "love you " , "love you " , "love you\n" , "love you\n" , "love you\n" , "love you " , "love you " , "love you\n" , "love you " , "love you " , "love you\n\n\n\n\n\n\n\n\n\n\n\n",
	
	//U
	 "love you " , "         " ,  "love you\n" , "love you " , "         " , "love you\n" , "love you" , "          " , "love you\n" , "love you"  "          " ,  "love you\n" , "love you" , "          " , "love you\n" , "love you" , "          " , "love you\n" , "love you" , "          " , "love you\n" , "love you" , "          " , "love you\n" , "love you " , "love you " , "love you\n" , "love you " , "love you " , "love you\n\n\n",
};
	    for (string str : strings) {
        typeWriterEffect(str);
        cout << endl << endl;
    }
    return 0;
}
