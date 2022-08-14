#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool checkIfExist(vector<int>& arr) {
    int n = arr.size();
    int half = 0, twice = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        twice = arr[i] * 2;
        if (arr[i] % 2 == 0) {
            half = arr[i] / 2;
        }

        if (mp[half] > 0 || mp[twice] > 0) {
            return true;
        }

        mp[arr[i]]++;
    }

    return false;
}

/*We maintain a hash table of the frequency of each element. Though the frequency here doesn't matter, we
are checking if the twice and half elements already exist. We only need one occurence to return true. It is important
to note here that we need to check for both the twice and half values of each element, since those target values
might appear at a later time.*/

int main() {
    vector<int> arr = {7, 1, 14, 11};

    cout << checkIfExist(arr);
    
    return 0;
}

// Time Complexity: O(n), we traverse the array once.
// Space Complexity: O(n), we maintain a hash table of potentially n elements if all elements are distinct.