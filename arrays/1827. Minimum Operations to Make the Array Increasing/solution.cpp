#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int>& nums) {
    int count = 0;
    for (size_t i = 1; i < nums.size(); i++) {
        int original_number = nums[i];
        nums[i] = max(nums[i - 1] + 1, nums[i]);
        count += (nums[i] - original_number);
    }
    
    return count;
}

int main() {
    vector<int> nums = {1,5,2,4,1};

    std::cout << minOperations(nums);

    return 0;
}