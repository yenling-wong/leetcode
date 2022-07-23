#include <iostream>
#include <vector>

using namespace std;

int maxProductDifference(vector<int>& nums) {
    int first_maximum = INT_MIN, second_maximum = INT_MIN;
    int first_minimum = INT_MAX, second_minimum = INT_MAX;
    
    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] > first_maximum) {
            second_maximum = first_maximum;
            first_maximum = nums[i];
        } else if (nums[i] > second_maximum) {
            second_maximum = nums[i];
        }
    }

    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] < first_minimum) {
            second_minimum = first_minimum;
            first_minimum = nums[i];
        } else if (nums[i] < second_minimum) {
            second_minimum = nums[i];
        }
    }

    return first_maximum * second_maximum - first_minimum * second_minimum;

}

int main() {
    vector<int> nums = {4,2,5,9,7,4,8};

    std::cout << maxProductDifference(nums);

    return 0;
}