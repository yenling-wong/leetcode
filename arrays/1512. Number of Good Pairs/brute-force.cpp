#include <iostream>
#include <vector>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int count = 0;
    for (size_t i = 0; i < nums.size() - 1; i++) {
        for (size_t j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                count += 1;
            }
        }
    }
    
    return count;
}

int main() {
    vector<int> nums = {1,2,3,1,1,3};
    cout << numIdenticalPairs(nums);
    return 0;
}