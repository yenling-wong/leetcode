#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome (string& word) {
    int pointer = 0;
    int n = word.size();
    while (pointer < n/2) {
        if (word[pointer] != word[n - pointer - 1]) {
            return false;
        }
        pointer++;
    }
    return true;
}

string firstPalindrome(vector<string>& words) {
    for (size_t i = 0; i < words.size(); i++) {
        if (isPalindrome(words[i])) {
            return words[i];
        }
    }
    return "";
}

int main() {
    vector<string> words = {"abc","car","ada","racecar","cool"};
    cout << firstPalindrome(words);
    return 0;
}