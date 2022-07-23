#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProduct(vector<int>& nums) {
    int maximum = INT_MIN, second_maximum = INT_MIN;

    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] > maximum) {
            second_maximum = maximum;
            maximum = nums[i];
        } else if (nums[i] > second_maximum) {
            second_maximum = nums[i];
        }
    }

    return (second_maximum - 1) * (maximum - 1);
}

int main() {
    vector<int> nums = {3,4,5,2};
    cout << maxProduct(nums);
    return 0;
}