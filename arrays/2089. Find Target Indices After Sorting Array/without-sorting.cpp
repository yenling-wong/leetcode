#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int> ans;
    
    int target_frequency = 0, less_than_target = 0;
    
    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            target_frequency++;
        } 
        
        if (nums[i] < target){
            less_than_target++;
        }
    }

    for (int i = less_than_target; i < target_frequency + less_than_target; i++) {
        ans.push_back(i);
    }
    
    return ans;
}

void printVector(vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

// Handle in case of empty vector

int main() {
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;
    vector<int> indices = targetIndices(nums, target);
    printVector(indices);
    
    return 0;
}