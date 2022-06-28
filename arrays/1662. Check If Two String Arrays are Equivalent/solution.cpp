#include <iostream>
#include <vector>

/* https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/discuss/2210630/C%2B%2B-4-METHODS-FAST-EASY*/
/* space optimized solution */

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string word3, word4;
    
    for (string x : word1) {
        word3.append(x);
    }
    
    for (string x: word2) {
        word4.append(x);
    }
    
    if (word3.compare(word4)) {
        return false;
    } else return true;
}

int main() {
    vector<string> word1 = {"ab", "c"}, word2 = {"a", "bc"};
    cout << arrayStringsAreEqual(word1, word2);
    return 0;
}