#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> numberOfPairs(vector<int>& nums) {
    vector<int> answer;
    map<int,int> m;
    int leftover = 0, pairs = 0;
    
    for (size_t i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }
    
    for (auto i : m)  {
        pairs += (i.second) / 2;
        leftover += i.second % 2;
    }
    
    answer.push_back(pairs);
    answer.push_back(leftover);
    
    return answer;
    
}

void printVector(vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    vector<int> nums = {1,3,2,1,3,2,2};
    vector<int> answer = numberOfPairs(nums);
    printVector(answer);

    return 0;
}