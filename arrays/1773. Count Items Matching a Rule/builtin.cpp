#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/* https://walkccc.me/LeetCode/problems/1773/ */

int countMatches(vector<vector<string>>& items, string ruleKey,
                string ruleValue) {
    const int index = ruleKey == "type" ? 0 : ruleKey == "color" ? 1 : 2;
    return count_if(begin(items), end(items),
                    [&](const auto& item) { return item[index] == ruleValue; });
}

int main() {
    vector<vector<string>> items = {{"phone","blue","pixel"}, {"computer","silver","lenovo"}, {"phone","gold","iphone"}};
    string ruleKey = "color";
    string ruleValue = "silver";
    cout << countMatches(items, ruleKey, ruleValue);

    return 0;
}



