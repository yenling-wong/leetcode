#include <iostream>
#include <vector>
#include <map>

using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
    map<int, int> row;
    map<int, int> column;
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

int main() {
    vector<vector<int>> indices = {{0, 1}, {1, 1}};
    int m = 2, n = 3;
    cout << oddCells(m, n, indices);

    return 0;
}