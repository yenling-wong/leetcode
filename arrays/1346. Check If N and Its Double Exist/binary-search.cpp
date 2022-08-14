#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

bool checkIfExist(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        int element = arr[i] * 2;

        if (binarySearch(arr, i + 1, n - 1, element) > -1) {
            return true;
        }
    }

    return false;
}

/*For each element we check to see if its double value exist using binary search. Important 
to note here is that the double value will always be on the right because the array is sorted.*/

int main() {
    vector<int> arr = {7, 1, 3, 11};

    cout << checkIfExist(arr);
    
    return 0;
}

// Time Complexity: O(n log n), we perform binary search once per element.
// Space Complexity: O(1), no extra space required.
