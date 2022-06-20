#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> sorted_nums = nums;
    unordered_map<int, int> map;

    int n = nums.size();
    
    sort(sorted_nums.begin(), sorted_nums.end());
    
    for (int i = n - 1; i >= 0; i--) {
        map[sorted_nums[i]] = i;
    }
    
    for (size_t i = 0; i < nums.size(); i++) {
        nums[i] = map[nums[i]];
    }
    
    return nums;
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