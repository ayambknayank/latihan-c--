
#include<bits/stdc++.h>
using namespace std;

int main() {
    string kurung;
    cin >> kurung;

	int total = 0;
    stack<char> tutup;
    
    for (char x : kurung) {
        if (x == '(') {
            tutup.push(x);
        }else if(!tutup.empty()) {
            tutup.pop();
            total += 2;
        }
    }

    cout << total << endl;

    return 0;
}

//
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string bracketSequence;
//    std::cin >> bracketSequence;
//
//    int maxLength = 0;
//    int currentLength = 0;
//
//    // Selama masih terdapat "()" dalam string, lakukan loop
//    while (bracketSequence.find("()") != std::string::npos) {
//        bracketSequence.replace(bracketSequence.find("()"), 2, "");  // Hapus "()" dari string
//        currentLength += 2;  // Tambah panjang saat ini
//        maxLength = std::max(maxLength, currentLength);
//    }
//
//    std::cout << maxLength << std::endl;
//
//    return 0;
//}
