#include <iostream>
#include <vector>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    size_t wordpointer1 = 0, wordpointer2 = 0, charpointer1 = 0, charpointer2 = 0;

    while (wordpointer1 < word1.size() && wordpointer2 < word2.size()) {
        if (word1[wordpointer1][charpointer1++] != word2[wordpointer2][charpointer2++]) {
            return false;
        }

        if (charpointer1 >= word1[wordpointer1].size()) {
            charpointer1 = 0;
            wordpointer1++;
        }

        if (charpointer2 >= word2[wordpointer2].size()) {
            charpointer2 = 0;
            wordpointer2++;
        }
    }

    return wordpointer1 == word1.size() && wordpointer2 == word2.size();
}


int main() {
    vector<string> word1 = {"ab", "c"}, word2 = {"a", "bc"};
    cout << arrayStringsAreEqual(word1, word2);
    return 0;
}
