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

            if (i > 0 && nums[i] <= nums[i - 2]) {
                nums[i] = nums[i - 1];
            }
        }
    }

    return true;
}

int main() {
    vector<int> nums = {6, 7, 2, 8, 9};
    cout << canBeIncreasing(nums);
    
    return 0;
}
