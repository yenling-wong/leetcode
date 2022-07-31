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
/* A variable is initialized to store the value of the integer, starting with zero. In the if statement, if an increment operation is read, then
the value increments by 1, and vice versa. */

int main() {
    vector<string> operations = {"--X","X++","X++"};
    cout << finalValueAfterOperations(operations);
    return 0;
}
// Time Complexity: O(n), the string vector operations is iterated through once.
// Space Complexity: O(1), no extra space needed besides the new int variable.
