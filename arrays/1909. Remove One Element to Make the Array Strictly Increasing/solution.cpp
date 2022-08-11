#include <iostream>
#include <vector>

using namespace std;

bool canBeIncreasing(vector<int>& nums) {
    int leftcount = 0, rightcount = 0;
    int n = nums.size();
    int last = nums.front();

    for (int i = 1; i < n; i++) {
        if (nums[i] > last) {
            last = nums[i];
        } else {
            leftcount++;
        }
    }

    last = nums.back();
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < last) {
            last = nums[i];
        } else {
            rightcount++;
        }
    }
    
    return min(leftcount, rightcount) <= 1;
}

/*We keep two counters, one for a left scan of the array, and one for the right. We also keep a 'last' pointer 
to track the previous element as we traverse the array. Should the current element be strictly greater than its previous, 
we update the last pointer to the current element. Else, we increment the leftcount variable for each consecutive element 
that is not stricly greater than an element to its left. Vice versa for a right scan of the array. The left and right counters
determine the number of consecutive elements that are not strictly greater (or lesser) than any one of the elements to their left (or right).
It only works if both left and right scans are performed on the array, and will return true if one of the counters are
either one (only one element should be removed), or zero (already strictly increasing). */

int main() {
    vector<int> nums = {1, 2, 10, 5, 7};
    cout << canBeIncreasing(nums);
    
    return 0;
}