#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
    unordered_map<char, int> m;
    int count = 0, n = words.size(), l = allowed.length();
    
    for (int i = 0; i < l; i++) {
        m[allowed[i]] += 1;
    }
    
    for (int i = 0; i < n; i++) {
        int k = words[i].length();
        for (int j = 0; j < k; j++) {
            if (m[words[i][j]] < 1) {
                count += 1;
                break;
            }
            
        }      
    }
    
    return  words.size() - count;
}

int main() {
    vector<string> words = {"ad","bd","aaab","baa","badab"};
    string allowed = "ab";
    cout << countConsistentStrings(allowed, words);
    return 0;
}