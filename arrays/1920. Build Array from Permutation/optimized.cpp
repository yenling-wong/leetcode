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



