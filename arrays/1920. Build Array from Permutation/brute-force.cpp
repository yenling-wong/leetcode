#include <iostream>
#include <vector>

using namespace std;

vector<int> ans;

vector<int> buildArray(vector<int>& nums) {
        
    for (size_t i = 0; i < nums.size(); i++) {
        ans.push_back(nums[nums[i]]);
    }
    
    return ans;
        
}

void printVector(vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
// Helper Function for Printing Result

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    buildArray(nums);
    printVector(ans);

    return 0;
}

/* Solution Explanation: Create a new vector. For each iteration, add nums[nums[i]] to the vector. */
/* Time Complexity: O(n), since we run through each value in the array exactly once. */
/* Space Complexity: O(n), since we create a new vector of exactly n elements. This can be improved by modifying the elements in-situ. See optimized version. */
