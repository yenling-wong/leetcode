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