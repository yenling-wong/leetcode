#include <iostream>
#include <vector>

using namespace std;

int countKDifference(vector<int>& nums, int k) {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(nums[i] - nums[j]) == k) {
                count += 1;
            }
        }
    }
    return count;
} 

int main() {
    vector<int> nums = {1, 2, 2, 1};
    cout << countKDifference(nums, 1);
    return 0;
}