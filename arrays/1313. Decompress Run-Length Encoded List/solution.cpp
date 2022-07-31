#include <iostream>
#include <vector>

using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> decompressed;

    int n = nums.size();

    for (int i = 0; i < n;  i = i + 2) {
        for (int j = 0; j < nums[i]; j++){
            decompressed.push_back(nums[i + 1]);
        }
    }
    return decompressed;
}
// For each ith and (i + 1)th pair, we push back the (i + 1)th value by ith times.

void printVector(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}
// Helper Function to Print Result Vector

int main() {
    vector<int> nums = {1, 1, 2, 3};
    vector<int> result = decompressRLElist(nums);
    printVector(result);
    return 0;
}
// Time Complexity: O(n), we iterate through nums once. However, at each iteration in nums, we also iterate nums[i] times. The
// constraints mention that 1 << nums[i] << 100, so it each iteration is upper bounded by 100, which is a constant and does not
// affect the time complexity.
// Space Complexity: O(n), since we create a new vector of size n.
