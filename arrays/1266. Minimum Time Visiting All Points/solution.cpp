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

int main() {
    vector<vector<int>> points = {{1, 1}, {3, 4}, {-1, 0}};
    cout << minTimeToVisitAllPoints(points);
    return 0;
}