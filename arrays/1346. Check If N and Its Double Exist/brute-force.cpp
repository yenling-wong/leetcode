#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool checkIfExist(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr[j] == 2 * arr[i]) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    vector<int> arr = {7, 1, 14, 11};

    cout << checkIfExist(arr);
    
    return 0;
}

// Time Complexity: O(n ^ 2), we traverse the array once per element.
// Space Complexity: O(1), no extra space required.
