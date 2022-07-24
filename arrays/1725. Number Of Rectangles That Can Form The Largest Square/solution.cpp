#include <iostream>
#include <vector>
#include <map>

using namespace std;

int countGoodRectangles(vector<vector<int>>& rectangles) {
    map<int, int> m;
    
    for (size_t i = 0; i < rectangles.size(); i++) {
        int minimum = min(rectangles[i][0], rectangles[i][1]);
        m[minimum]++;
    }
   
    return m.rbegin()->second;
}

int main() {
    vector<vector<int>> rectangles = {{5, 8}, {3, 9}, {5, 12},{16, 5}};
    cout << countGoodRectangles(rectangles);
    return 0;
}
