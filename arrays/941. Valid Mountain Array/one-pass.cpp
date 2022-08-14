#include <iostream>
#include <vector>

using namespace std;

bool validMountainArray(vector<int>& arr) {
    int n = arr.size(), i = 0;
    if (arr.size() < 3) {
        return false;
    }
    
    while (i < n - 1 && arr[i] < arr[i + 1]) {
        i++;
    }

    if (i == 0 || i == n - 1) {
        return false;
    }

    while (i < n - 1 && arr[i] > arr[i + 1]) {
        i++;
    }

    return i == n - 1;
}

/* We perform one scan of the array, and increment the pointer until we reach the peak.
Should the peak be at the start or the end of the array, it is invalid. Then, we decrement
from the peak to the end of the array. Should the array be a mountain array, the pointer
will be at the end of the array. */

int main() {
    vector<int> arr = {0, 2, 3, 4, 5, 2, 1, 0};
    cout << validMountainArray(arr);
    return 0;
}

// Time Complexity: O(n), we traverse the array once.
// Space Complexity: O(1), no extra space needed
