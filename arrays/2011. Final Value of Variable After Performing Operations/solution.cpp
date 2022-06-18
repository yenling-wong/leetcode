#include <iostream>
#include <vector>

using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int value = 0;
    for (size_t i = 0; i < operations.size(); i++) {
        if (operations[i] == "X++" || operations[i] == "++X") {
            value += 1;
        } else {
            value -= 1;
        }
    }
    return value;
    
}

int main() {
    vector<string> operations = {"--X","X++","X++"};
    cout << finalValueAfterOperations(operations);
    return 0;
}