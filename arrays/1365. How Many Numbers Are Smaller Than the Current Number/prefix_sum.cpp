#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> count;

    for (int i = 0; i < 101; i++) {
        count.push_back(0);
    }

    for (size_t i = 0; i < nums.size(); i++) {
        count[nums[i]] += 1;
    }

    for (int i = 1; i < 101; i++) {
        count[i] += count [i - 1];
    }

    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            nums[i] = 0;
        } else {
            nums[i] = count[nums[i] - 1];
        }
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