#include <iostream>
#include <vector>

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
