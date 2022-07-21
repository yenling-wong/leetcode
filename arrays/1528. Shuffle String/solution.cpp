#include <iostream>
#include <vector>

using namespace std;

string restoreString(string s, vector<int>& indices) {
    int n = indices.size();
    string t(n, 'A');
    
    for (size_t i = 0; i < s.length(); i++){
        t[indices[i]] = s[i];
    }
    
    return t;
}

int main() {
    string s = "codeleet";
    vector<int> indices = {4,5,6,7,0,2,1,3};
    cout << restoreString(s, indices);
    return 0;
}