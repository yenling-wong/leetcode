#include <iostream>
#include <vector>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool prev = false;
        int length = flowerbed.size();

        for (int i = 0; i < length; i++) {
            if (flowerbed[i]) prev = true;
            else {
                if (!prev && (i + 1 == length || flowerbed[i + 1] == 0)) {
                    n--;
                    prev = true;
                } else {
                    prev = false;
                }
            }
        }
        return n <= 0;
}

/* We can solve this without modifying the original array by tracking whether the previous spot is occupied using a boolean flag. 
As we traverse through the array, we track if the previous element and the next element empty only if the current spot is empty.
If this is the case, we modify in flag. The corner case of being the leftmost element is taken care of because the prev element is
set to false by default. */

int main() {
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    cout << canPlaceFlowers(flowerbed, n);

    return 0;
}

// Time Complexity: O(n), we iterate through the array once.
// Space Complexity: O(1), no extra space needed
