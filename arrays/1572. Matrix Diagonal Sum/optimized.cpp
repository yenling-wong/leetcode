#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int diagonal_sum = 0;
    int n = mat.size();

    for (int i = 0; i < n; i++) {
        diagonal_sum += mat[i][i] + mat[i][n - i - 1];
    }

    if (n % 2 == 1) {
        diagonal_sum -= mat[n/2][n/2];
    }
    
    return diagonal_sum;
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << diagonalSum(mat);

    return 0;
}