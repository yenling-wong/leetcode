#include <iostream>
#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int max = 0;
    vector<bool> result;

    for (size_t i = 0; i < candies.size(); i++) {
        if (candies[i] > max) {
            max = candies[i];
        }
    }
    
    for (size_t i = 0; i < candies.size(); i++) {
        if ((candies[i] + extraCandies) >= max) {
            result.push_back(true);
        } else {
            result.push_back(false);
        }
    }
    
    return result;    
}

void printVector(vector<bool>& nums) {
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> candies = {2,3,5,1,3};
    vector<bool> result = kidsWithCandies(candies, 3);
    printVector(result);
    return 0;
}