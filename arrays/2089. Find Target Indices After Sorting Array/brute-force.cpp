#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int> ans;
    sort(nums.begin(), nums.end());
    
    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            ans.push_back(i);
        }
    }
    
    return ans;
}

void printVector(vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;
    vector<int> indices = targetIndices(nums, target);
    printVector(indices);
    
    return 0;
}