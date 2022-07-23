#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int diagonal_sum = 0;
    int n = mat.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j + 1 == n) {
                diagonal_sum += mat[i][j];
            }
        }
    }
    
    return diagonal_sum;
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << diagonalSum(mat);

    return 0;
}