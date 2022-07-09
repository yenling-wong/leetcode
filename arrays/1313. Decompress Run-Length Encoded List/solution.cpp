/* https://leetcode.com/problems/decompress-run-length-encoded-list/ */

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

void printVector(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = {1, 1, 2, 3};
    vector<int> result = decompressRLElist(nums);
    printVector(result);
    return 0;
}
