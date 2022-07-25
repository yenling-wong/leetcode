#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> numberOfPairs(vector<int>& nums) {
    vector<int> answer;
    set<int> s;
    int pairs = 0;
    set<int>::iterator it;
    
    for (size_t i = 0; i < nums.size(); i++) {
        it = s.find(nums[i]);

        if (it != s.end()) {
            s.erase(it);
            pairs++;
        } else {
            s.insert(nums[i]);
        }
    }
    
    answer.push_back(pairs);
    answer.push_back(s.size());
    
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