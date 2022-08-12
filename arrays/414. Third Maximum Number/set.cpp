#include <iostream>
#include <vector>
#include <set>

using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> st;
    int n = nums.size(), count = 0;

    for (int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }

    for (auto it = st.rbegin(); it != st.rend(); it++) {
        count++;

        if (count == 3) {
            return *it;
        }
    }

    it = st.rbegin();

    return *itr;
}

/* We use a set to store all distinct elements. We then use a reverse iterator to traverse the array
starting from the back, as sets are sorted. We increment the counter for each element in the set until
we reach the third largest element and return the value. Otherwise if the set contains only two elements
we point the iterator to the last element again and return that value. */

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << thirdMax(nums);
    return 0;
}

// Time Complexity: O(log n) + O(n) = O(n), the insertion operation for a set takes log n time where n is the number of elements in the set. 
// Since we iterate through the set to obtain the third maximum, it takes linear time, which is upper-bounded by O(n) because the array could 
// contain all distinct elements.
// Space Complexity: O(n), We use a set to store all distinct elements, so it is upper bounded by O(n).
