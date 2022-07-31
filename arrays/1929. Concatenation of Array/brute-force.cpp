#include <iostream>
#include <vector>

using namespace std;

vector<int> ans;

vector<int> getConcatenation(vector<int>& nums) {
    while (ans.size() < 2 * nums.size()) {
        for (size_t i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }
    }

    return ans;
}

/* We create a new array. We use two for loops to push elements onto the new array, and quit the while loop when the number of elements are twice
the number of the original array. */

void printVector(vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

int main() {
    vector<int> nums = {1, 2, 1};
    getConcatenation(nums);
    printVector(ans);
    return 0;
}

// Time Complexity: O(n), we iterate over the nums array twice.
// Space Complexity: O(n), we create a new array of twice the size of the original array.
