#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countKDifference(vector<int>& nums, int k) {
    int ctr = 0;
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        ctr+=mp[nums[i] + k] + mp[nums[i] - k];
        mp[nums[i]]++;
    }
    return ctr;
}

int main() {
    vector<int> nums = {1, 2, 2, 1};
    cout << countKDifference(nums, 1);
    return 0;
}
