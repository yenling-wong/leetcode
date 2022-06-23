#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(index[i] != i) {
            int x = nums[i];
            for(int j = i; j > index[i]; j--){
                nums[j] = nums[j - 1];
            }
            nums[index[i]] = x;
        }
    }
    
    return nums;
}

int main() {
    vector<int> nums = {0,1,2,3,4};
    vector<int> index = {0,1,2,2,1};
    vector<int> result = createTargetArray(nums, index);
    printVector(result);
    return 0;
}