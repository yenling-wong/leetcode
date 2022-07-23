#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n = image.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
            swap(image[i][j], image[i][n - j - 1]);
        }
    }

    // Using reverse function also works
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            image[i][j] = abs(image[i][j] - 1);
        }
    }
    
    return image;
}

void printVector(vector<vector<int>>& image) {
    int n = image.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    flipAndInvertImage(image);
    printVector(image);
    return 0;
}