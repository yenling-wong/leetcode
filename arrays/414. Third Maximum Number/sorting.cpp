#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int count = 1, n = nums.size(), last = nums.back();

    for (int i = n - 1; i >= 0; i--) {
        if (last != nums[i]) {
            last = nums[i];
            count++;
        }
        if (count == 3) {
            return nums[i];
        }
    }  
    return nums.back();      
}

/* We sort the array in ascending order, and we perform a right scan of the array. We keep track of the distinct 
elements by incrementing the counter. As soon as the counter equals three, we return that element as it is the third 
maximum. If there is no such element, we simply return the last element of the array which is the largest after 
sorting. */

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << thirdMax(nums);
    return 0;
}

// Time Complexity: O(n log n) + O(n) = O(n log n). Sorting the array takes n log n time, then we perform another traversal of the array.
// Space Complexity: O(1), no extra space needed, as the sorting is done in place.
