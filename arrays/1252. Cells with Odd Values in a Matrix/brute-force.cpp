#include <iostream>
#include <vector>

using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
    int count = 0;
    
    vector<vector<int>> matrix (m, vector<int> (n, 0));
    // Initialize an m * n matrix to zero values.
    
    for (size_t i = 0; i < indices.size(); i++) {
        // Iterate through the indices array to obtain the targeted row and column.
        int row = indices[i][0];
        int column = indices[i][1];
        
        for (int j = 0; j < n; j++) {
            matrix[row][j] += 1;
        }
        // Increment all the values of the row.
        
        for (int k = 0; k < m; k++) {
            matrix[k][column] += 1;
        }
        // Increment all the values of the column.
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 1) {
                count += 1;
            }
        }
    }
    // Iterate through the whole matrix to count the number of odd values.
    return count;
}

int main() {
    vector<vector<int>> indices = {{0, 1}, {1, 1}};
    int m = 2, n = 3;
    cout << oddCells(m, n, indices);

    return 0;
}
