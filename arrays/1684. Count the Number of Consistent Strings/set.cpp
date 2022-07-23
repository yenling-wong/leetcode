#include <iostream>
#include <vector>
#include <set>

using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
    set<char> s;
    int count = 0;
    
    for (size_t i = 0; i < allowed.length(); i++) {
        s.insert(allowed[i]);
    }
    
    for (size_t i = 0; i < words.size(); i++) {
        for (size_t j = 0; j < words[i].length(); j++) {
            auto pos = s.find(words[i][j]);
            if (pos == s.end()) {
                count += 1;
                break;
            }
            
        }      
    }
    
    return words.size() - count;
}

int main() {
    vector<string> words = {"ad","bd","aaab","baa","badab", "bba"};
    string allowed = "ab";
    cout << countConsistentStrings(allowed, words);
    return 0;
}