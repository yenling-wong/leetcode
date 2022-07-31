#include <iostream>
#include <vector>

using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int time = 0;
    
    for (size_t i = 0; i < points.size() - 1; i++) {
        int horizontal = abs(points[i][0] - points[i + 1][0]);
        int vertical = abs(points[i][1] - points[i + 1][1]);
        
        time += max(horizontal, vertical);
    }
    
    return time;
}
/* We use a variable to track the time needed for each point traversed while accumulating the total time taken to traverse all the points.
We then calculate the horizontal distance between each point as well as the vertical distance. We add the maximum of these two to the time variable. */

int main() {
    vector<vector<int>> points = {{1, 1}, {3, 4}, {-1, 0}};
    cout << minTimeToVisitAllPoints(points);
    return 0;
}

// Time Complexity: O(n), we iterate through the points array once.
// Space Complexity: No extra space needed.
