#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    
    return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
}

int main() {
    vector<int> nums = {3,4,5,2};
    cout << maxProduct(nums);
    return 0;
}