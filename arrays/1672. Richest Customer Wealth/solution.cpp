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
        }
        max = std::max(max,current);
    }

    return max;
}
/* Iterate through each account per customer to find out their total wealth, and compare it with the current max value.
Reset the current value to zero after proceeding to the next customer. */

int main() {
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    cout << maximumWealth(accounts);
    return 0;
}

// Time Complexity: O(m * n), because we iterate through n number of accounts of m customers.
// Space Complexity: O(1), not extra space needed except for the variable storing the max value.
