#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (size_t i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
    }
        
    return nums;      
}
/* Printing the prefix sum of the array, which is to add the result of an element to the next element in the array. This is a common
technique for solving array problems. */

void printVector(vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

// Helper Function to Print Resulting Vector

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    runningSum(nums);
    printVector(nums);

    return 0;
}

// Time Complexity: O(n), the array is iterated through once.
// Space Complexity: O(1), not extra space is needed because the operations are performed in-situ.
