#include <iostream>
#include <vector>

using namespace std;

int thirdMax(vector<int>& nums) {
    long firstmax = LONG_MIN, secondmax = LONG_MIN, thirdmax = LONG_MIN;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] > firstmax) {
            thirdmax = secondmax;
            secondmax = firstmax;
            firstmax = nums[i];
        } else if (nums[i] > secondmax && firstmax > nums[i]) {
            thirdmax = secondmax;
            secondmax = nums[i];
        } else if (nums[i] > thirdmax && secondmax > nums[i]) {
            thirdmax = nums[i];
        }
    }

    return thirdmax == LONG_MIN ? firstmax : thirdmax;
}

/* We use long integers here because the constraints include INT_MIN as the smallest element.
To ensure that the maximums are distinct, we include the second part after the && statement.
Alternatively, we could have a continue statement at the start of the loop if the current 
element is equal to any of the maximums. */

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << thirdMax(nums);
    return 0;
}

// Time Complexity: O(n), we traversed the array once.
// Space Complexity: O(1), no extra space needed.
