#include <iostream>
#include <vector>

using namespace std;

bool isBoomerang(vector<vector<int>>& points) {
    return (points[1][0] - points[0][0]) * (points[2][1] - points[1][1]) !=
           (points[1][1] - points[0][1]) * (points[2][0] - points[1][0]);
}

/* Any two lines in a triangle should not have the same gradient */

int main() {
    vector<vector<int>> points = {{1, 1}, {2, 3}, {3, 2}};
    cout << isBoomerang(points);
}

// Time Complexity: O(1), accessing elements by index is constant time
// Space Complexity: O(1), no extra space needed