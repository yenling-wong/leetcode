#include <iostream>
#include <vector>

using namespace std;

string truncateSentence(string s, int k) {
    vector<string> words;
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ' && --k == 0) {
            return s.substr(0, i);
        }
    }
    return s;
}

int main() {
    string s = "Hello how are you Contestant";
    int k = 4;

    cout << truncateSentence(s, k);

    return 0;
}



