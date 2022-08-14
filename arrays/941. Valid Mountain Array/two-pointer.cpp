#include <iostream>
#include <vector>

using namespace std;

bool validMountainArray(vector<int>& arr) {
    int n = arr.size(), i = 0, j = n - 1;

    if (arr.size() == 3) {
        return false;
    }

    while (i < n - 1 && arr[i] < arr[i + 1]) {
        i++;
    }

    while (j > 0 && arr[j] < arr[j - 1]) {
        j--;
    }

    return i == j && i > 0 && j < n - 1;
}

/* We maintain two pointers, one to ascend the mountain from the left and the other from the right.
If the conditions are met, they will meet at the peak.*/


int main() {
    vector<int> arr = {0, 2, 3, 4, 5, 2, 1, 0};
    cout << validMountainArray(arr);
    return 0;
}

// Time Complexity: O(n), we traverse the array once. 
// Space Complexity: O(1), no extra space needed
