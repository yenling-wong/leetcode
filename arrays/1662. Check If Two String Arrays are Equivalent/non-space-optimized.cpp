#include <iostream>
#include <vector>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string x, y;

    for (size_t i = 0; i < word1.size(); i++) {
        for (size_t j = 0; j < word1[i].size(); j++) {
            x.push_back(word1[i][j]);
        }
    }

    for (size_t i = 0; i < word2.size(); i++) {
        for (size_t j = 0; j < word2[i].size(); j++) {
            y.push_back(word2[i][j]);
        }
    }

    if (x == y) {
        return true;
    }

    return false;

}


int main() {
    vector<string> word1 = {"ab", "c"}, word2 = {"a", "bc"};
    cout << arrayStringsAreEqual(word1, word2);
    return 0;
}
