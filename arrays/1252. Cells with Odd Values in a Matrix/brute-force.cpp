#include <iostream>
#include <vector>

using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
    int count = 0;
    
    vector<vector<int>> matrix (m, vector<int> (n, 0));
    
    for (size_t i = 0; i < indices.size(); i++) {
        int row = indices[i][0];
        int column = indices[i][1];
        for (int j = 0; j < n; j++) {
            matrix[row][j] += 1;
        }
        for (int k = 0; k < m; k++) {
            matrix[k][column] += 1;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 1) {
                count += 1;
            }
        }
    }
    return count;
    
}

int main() {
    vector<vector<int>> indices = {{0, 1}, {1, 1}};
    int m = 2, n = 3;
    cout << oddCells(m, n, indices);

    return 0;
}
