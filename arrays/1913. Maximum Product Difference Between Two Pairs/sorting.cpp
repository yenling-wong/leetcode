#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProductDifference(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    return nums[n - 2] * nums[n - 1] - nums[0] * nums[1];
    
}

int main() {
    vector<int> nums = {4,2,5,9,7,4,8};

    std::cout << maxProductDifference(nums);

    return 0;
}