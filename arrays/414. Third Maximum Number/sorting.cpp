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

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << thirdMax(nums);
    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity:
