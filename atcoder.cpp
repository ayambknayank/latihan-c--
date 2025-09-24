#include <iostream>
#include <unordered_map>
#include <climits>

char mostFrequentCharacter(const std::string& s) {
    std::unordered_map<char, int> charCount;

    for (char c : s) {
        charCount[c]++;
    }

    char mostFrequent = 'a';  
    int maxFrequency = INT_MIN;

    for (const auto& entry : charCount) {
        if (entry.second > maxFrequency || (entry.second == maxFrequency && entry.first < mostFrequent)) {
            mostFrequent = entry.first;
            maxFrequency = entry.second;
        }
    }

    return mostFrequent;
}

int main() {
    std::string inputString;
    
    std::cin >> inputString;

    char result = mostFrequentCharacter(inputString);

    std::cout << result << std::endl;

    return 0;
}
