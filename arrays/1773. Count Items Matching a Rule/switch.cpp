#include <iostream>
#include <vector>

using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int count = 0;
    int rule;
    
    if (ruleKey == "type") {
        rule = 0;
    } else if (ruleKey == "color") {
        rule = 1;
    } else {
        rule = 2;
    }
    
    for (size_t i = 0; i < items.size(); i++) {
        switch(rule) {
            case 0:
                if (ruleValue == items[i][0]) {
                    count = count + 1;
                }         
                break;

            case 1:
                if (ruleValue == items[i][1]) {
                    count = count + 1;
                }       
                break;

            case 2:
                if (ruleValue == items[i][2]) {
                    count = count + 1;
                }
                break;
        }
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



