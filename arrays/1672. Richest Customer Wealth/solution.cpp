#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int max = 0;

    for (size_t i = 0; i < accounts.size(); i++) {
        int current = 0;
        for (size_t j = 0; j < accounts[i].size(); j++) {
            current += accounts[i][j];
            max = std::max(max,current);
        }
    }

    return max;

}

int main() {
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    cout << maximumWealth(accounts);
    return 0;
}