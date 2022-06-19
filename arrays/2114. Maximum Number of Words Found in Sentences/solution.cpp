#include <iostream>
#include <vector>

using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int count = 1;
    int max = 1;

    for (size_t i = 0; i < sentences.size(); i++) {
        count = 1;
        for (size_t j = 0; j < sentences[i].size(); j++) {
            if (sentences[i][j] == ' ') {
                count += 1;
            }
        }

        max = std::max(count, max);
    }
    return max;
}

int main() {
    vector<string> sentences = {"please wait", "continue to fight", "continue to win"};
    cout << mostWordsFound(sentences);
    return 0;
}