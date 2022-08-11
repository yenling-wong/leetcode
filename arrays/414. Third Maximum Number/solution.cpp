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

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << thirdMax(nums);
    return 0;
}