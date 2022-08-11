#include <iostream>
#include <vector>

using namespace std;

bool canBeIncreasing(vector<int>& nums) {
    int count = 0, n = nums.size();

    for (int i = 1; i < n; i++) {
        if (nums[i] <= nums[i - 1]) {
            if (count == 1) {
                return false;
            }
            count++;

            if (i > 1 && nums[i] <= nums[i - 2]) {
                nums[i] = nums[i - 1];
            }
            // Removing current element.
        }
    }

    return true;
}
/* We keep a counter to track the number of elements that are not strictly greater than the element
to their left. On line 16, we replace the current element with its previous element if it is still 
smaller than the element two spaces before it. This is equivalent to removing the current element, 
and ensuring that the following element is not compared to that value, but the value before it. 
Without this mechanism in place, the array {6, 7, 2, 3, 9} will pass. */

int main() {
    vector<int> nums = {6, 7, 2, 8, 9};
    cout << canBeIncreasing(nums);
    
    return 0;
}
// Time Complexity: O(n), we traverse the array once.
// Space Complexity: O(1), no additional space required.
