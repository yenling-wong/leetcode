#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int length = nums.size();
    for (int i = 0; i < length; i++) {
        nums.push_back(nums[i]);
    }

    return nums;
}

/* Since the array already contains the first half of resulting elements, we simply have to push the new elements onto the same array. */

void printVector(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = {1, 2, 1};
    getConcatenation(nums);
    printVector(nums);
    return 0;
}

// Time Complexity: O(n), we iterate through the nums array once.
// Space Complexity: O(n), we use an additional n spaces to store the new elements.
