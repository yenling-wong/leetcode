#include <iostream>
#include <vector>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> ans;
    for (size_t i = 0; i < nums.size(); i++) {
        int count = 0;
        for (size_t j = 0; j < nums.size(); j++) {
            if (nums[j] < nums[i] && j != i) {
                count += 1;
            }
        }
        ans.push_back(count);     
    }
    return ans;
}

void printVector(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = {8,1,2,2,3};
    vector<int> result = smallerNumbersThanCurrent(nums);
    printVector(result);
    return 0;
}