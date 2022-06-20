#include <iostream>
#include <vector>

using namespace std;

vector<int> decode(vector<int>& encoded, int first) {
    vector<int> original;
    original.push_back(first);
    
    for (size_t i = 0; i < encoded.size(); i++) {
        original.push_back(original[i] ^ encoded[i]);
    }
    
    return original;
}

void printVector(vector<int>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = {6, 2, 7, 3};
    vector<int> result = decode(nums, 4);
    printVector(result);
    return 0;
}