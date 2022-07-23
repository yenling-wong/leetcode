#include <iostream>
#include <vector>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    size_t wordpointer2 = 0, charpointer2 = 0;

    for (string word : word1) {
        for (char character : word) {
            if (wordpointer2 == word2.size() || character != word2[wordpointer2][charpointer2++]) {
                return false;
            }

            if (charpointer2 == word2[wordpointer2].size()) {
                wordpointer2++;
                charpointer2 = 0;
            }
        }
    }

    return wordpointer2 == word2.size();
}


int main() {
    vector<string> word1 = {"abc", "c"}, word2 = {"a", "bcc"};
    cout << arrayStringsAreEqual(word1, word2);
    return 0;
}
