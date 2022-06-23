#include <iostream>
#include <vector>
#include <map>

using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    map<string, int> map;
    int count = 0, n = items.size(), i = 0;

    map["type"] = 0;
    map["color"] = 1;
    map["name"] = 2;

    while (i < n) {
        if (items[i][map[ruleKey]] == ruleValue) {
            count += 1;
        }
        i = i + 1;
    }

    return count;
}

int main() {
    vector<vector<string>> items = {{"phone","blue","pixel"}, {"computer","silver","lenovo"}, {"phone","gold","iphone"}};
    string ruleKey = "color";
    string ruleValue = "silver";
    cout << countMatches(items, ruleKey, ruleValue);

    return 0;
}



