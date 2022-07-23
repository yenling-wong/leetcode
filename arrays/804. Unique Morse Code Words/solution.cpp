#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> encoding = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> transformation;
        
    for (size_t i = 0; i < words.size(); i++) {
        string translation;
        for (size_t j = 0; j < words[i].size(); j++) {
            translation += encoding[words[i][j] - 'a'];
        }
        transformation.insert(translation);  
    }
    
    return transformation.size();
}

int main() {
    vector<string> words = {"gin","zen","gig","msg"};
    cout << uniqueMorseRepresentations(words);
    return 0;
}