#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArray(vector<int>& nums, int n) {
        
    for (size_t i = 0; i < nums.size(); i++) {
        nums[i] += n * (nums[nums[i]] % n);
    }

    for (size_t i = 0; i < nums.size(); i++) {
        nums[i] /= n;
    }
    
    return nums;
        
}
/* Solution Description: We know that (a + b * n) / n = b and (a + b * n) % n = a . In this context, we let a = nums[i] and b = nums[nums[i]]. In the first iteration, 
we add nums[nums[i]] to nums[i]. Since the number might have been modified to nums[nums[i]] already, we apply the % operation to obtain the original nums[i]. 
In the second iteration, we divide all the elements in the array by n to obtain nums[nums[i]]. */

void printVector(vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

/* Helper function for printing. */

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    buildArray(nums, sizeof(nums)/sizeof(nums[0]));
    printVector(nums);

    return 0;
}

// Time Complexity: O(n), since we iterate through the full array twice.
// Space Complexity: O(1), since we modify the values in-situ.
