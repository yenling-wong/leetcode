#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    for (size_t i = 0; i < nums.size(); i++) {
        int current_position = i;
        int current_number = nums[current_position];

        while(current_number > 0){
            int new_position;
            int new_number;

            if (current_position < n) {
                new_position = 2 * current_position;
            } else {
                new_position = 2 * (current_position - n) + 1;
            }

            new_number = nums[new_position];
            nums[new_position] = current_number * -1;
            current_position = new_position;
            current_number = new_number;
        }
    }

    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] < 0) {
            nums[i] *= -1;
        }
    }
    return nums;
}

void printVector(vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

int main() {
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    shuffle(nums, n);

    printVector(nums);
    return 0;
}