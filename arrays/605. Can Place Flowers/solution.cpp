#include <iostream>
#include <vector>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int length = flowerbed.size();

    if (n == 0) {
        return true;
    }

    for (int i = 0; i < length; i++) {
        if (flowerbed[i] == 0 &&
        (flowerbed[i - 1] == 0 || i == 0) 
        && (flowerbed[i + 1] == 0 || i == length - 1)) {
            if (--n == 0) {
                return true;
            }
        }
    }

    return false;
}

/* In any case, zero flowers can always be planted, hence the first condition. We then perform a traversal of the array.
Only if the current plot is empty we will consider the other constraints. If the next and previous plots are empty, we can modify 
the current plot to 1. The edge cases are if the current position is on the first or last position. Note that the postfix decrement
is important here, as we perform the decrement before applying the comparison operator.

Still trying to find out why we can do no better than greedy? */

int main() {
    vector<int> flowerbed = {1, 0, 0, 1};
    int n = 1;

    cout << canPlaceFlowers(flowerbed, n);

    return 0;
}

// Time Complexity: O(n), we iterate through the array once.
// Space Complexity: O(1), no extra space needed