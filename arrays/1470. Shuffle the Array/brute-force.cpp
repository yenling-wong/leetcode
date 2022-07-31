#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;

    for (size_t i = 0; i < nums.size() / 2; i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[n + i]);
    }

    return ans;
}

/* Create a new vector. Iterate halfway through the nums array, push both the values of the current index and that plus n. */

void printVector(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

// Helper Function to Print the Result

int main() {
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    shuffle(nums, n);

    printVector(nums);
    return 0;
}

// Time Complexity: O(n), because we only traverse through half the array.
// Space Complexity: O(n), a new vector of n length was created to store the values.
