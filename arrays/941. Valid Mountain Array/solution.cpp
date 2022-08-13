#include <iostream>
#include <vector>

using namespace std;

bool validMountainArray(vector<int>& arr) {
    int n = arr.size();
    if (arr.size() < 3) {
        return false;
    }
    
    int max = arr.front();
    int peak = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            peak = i;
        }
    }
    
    if (peak == 0 || peak == n - 1) {
        return false;
    }
    
    for (int i = 0; i < peak; i++) {
        if (arr[i] >= arr[i + 1]) {
            return false;
        }
    }
    
    for (int i = peak; i < n - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            return false;
        }
    }
    
    return true;
}
/* We traverse the array to get the index of the maximum element (peak) in the array. We then check if the peak is at the last
element or the first, and return false if that is the case. Otherwise, we check if the elements increase strictly leading
up to the peak element. and then from there we check if it decreases strictly. This was the first solution that came to mind,
could write more elegant and efficient code to only scan the array once. :/*/

int main() {
    vector<int> arr = {0, 2, 3, 4, 5, 2, 1, 0};
    cout << validMountainArray(arr);
    return 0;
}

// Time Complexity: O(n), we traverse the array once to find the maximum, then another time to check
// if it increases to the peak and decreases from the peak.
// Space Complexity: O(1), no extra space needed
