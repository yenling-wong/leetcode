#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (size_t i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
    }
        
    return nums;      
}

void printVector(vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    runningSum(nums);
    printVector(nums);

    return 0;
}



