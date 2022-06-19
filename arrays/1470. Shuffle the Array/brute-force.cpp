#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans;

    for (size_t i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[n + i]);
    }

    return ans;
}

void printVector(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    shuffle(nums, n);

    printVector(nums);
    return 0;
}