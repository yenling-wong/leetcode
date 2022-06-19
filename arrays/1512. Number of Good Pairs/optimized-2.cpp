#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int, int> map;

    int good_pairs = 0;
    
    for (int num : nums) {
        good_pairs += map[num];
        map[num] += 1;
    }

    return good_pairs;
}

int main() {
    vector<int> nums = {1,2,3,1,1,3};
    cout << numIdenticalPairs(nums);
    return 0;
}
