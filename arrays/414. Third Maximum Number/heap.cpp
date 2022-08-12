#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

int thirdMax(vector<int>& nums) {
    priority_queue<int, vector<int>, greater<int>> minheap;
    unordered_set<int> set;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (!set.count(nums[i])) {
            set.insert(nums[i]);
            minheap.push(nums[i]);
            if (minheap.size() > 3) {
                minheap.pop();
            }
        }
    }

    if (minheap.size() == 2) {
        minheap.pop();
    } 

    return minheap.top();
}

/*We use a priority queue here to store elements in descending order (usually the largest element gets the highest priority,
but we change the ordering with the extra parameters). As such, the element with the highest priority (smallest) gets served 
first, and the top element is the element with the highest priority (the smallest). We use a set to ensure only unique values 
get pushed into the queue. The count function for the set STL returns 1 if the element is already in the set, and 0 if it isn't. 
When the element gets pushed on to the queue, the element is assigned priority based on its magnitude. If we restrict the 
elements to only a maximum size of three, we will always pop (dequeue) the lowest element (has the highest priority) so that 
only the top three unique largest elements remain in the queue. If the third maximum does not exist and the queue only has two 
elements, we pop the second maximum, leaving us with the maximum, else we return the third largest element in the queue, which 
is also the smallest element at the top. If there only exist one element, then that element is simply the maximum. */

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << thirdMax(nums);
    return 0;
}

// Time Complexity: O(n log 3) = O(n)
// Space Complexity : O(log 3) = O(1)
