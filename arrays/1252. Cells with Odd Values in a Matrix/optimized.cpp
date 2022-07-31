#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
    unordered_map<int, int> row;
    unordered_map<int, int> column;
    
    int count = 0;
    
    for (size_t i = 0; i < indices.size(); i++) {
        row[indices[i][0]]++;
        column[indices[i][1]]++;
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            if ((row[i] + column[j]) % 2 == 1) {
                count++;
            }
        }
    }
   
    return count;
}

/* Create two maps, one to store the row operations and the other to store the column operations. Create a new integer value to store the
number of odd elements. Iterate through the indices array. Increment the respective row and column indicated in the indices. This represents the frequency
a row or column has been incremented. Finally, iterate through every possible combination of row and column using two for loops. If the combined number of 
operations performed on that element is an odd number the element is odd and we increment count by 1 */

int main() {
    vector<vector<int>> indices = {{0, 1}, {1, 1}};
    int m = 2, n = 3;
    cout << oddCells(m, n, indices);

    return 0;
}
// Time Complexity: O(n * m + indices.length), since we iterate through the length of the indices array, as well as m rows * n columns of the two maps.
// Space Complexity: O(n + m), extra space is used in the form of two maps to store m and n values respectively.
