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

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    buildArray(nums);
    printVector(ans);

    return 0;
}



