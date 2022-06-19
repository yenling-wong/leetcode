#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int, int> map;
    
    for (int num : nums) {
        map[num] += 1;
    }

    int good_pairs = 0;

    for (auto i = map.begin(); i != map.end(0); i++) {
        if (i -> second > 0) {
            good_pairs += (i -> second) * ((i -> second) - 1) / 2;
        }
    }

    return good_pairs;
}

int main() {
    vector<int> nums = {1,2,3,1,1,3};
    cout << numIdenticalPairs(nums);
    return 0;
}
