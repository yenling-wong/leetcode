#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countPairs(vector<int>& nums, int k) {
    unordered_map<int, vector<int>> map;
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        if (map.find(nums[i]) != map.end()) {
            for (auto x : map[nums[i]]) {
                if ((x * i) % k == 0) {
                    count = count + 1;
                }
            }
        }

        map[nums[i]].push_back(nums[i]);
    }

    return count;
}

int main() {
    vector<int> nums = {3,1,2,2,2,1,3};
    int k = 2;
    cout << countPairs(nums, k);
    return 0;
}