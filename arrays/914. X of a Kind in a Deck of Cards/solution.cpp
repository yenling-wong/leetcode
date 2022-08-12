#include <iostream>
#include <vector>
#include <unordered_map>
#include <numeric>

using namespace std;

bool hasGroupsSizeX(vector<int>& deck) {
    unordered_map<int, int> mp;
    int n = deck.size();
    for (int i = 0; i < n; i++) {
        mp[deck[i]]++;
    }

    int answer = 0;

    for (auto i : mp) {
        answer = gcd(i.second, answer);
    }
            
    return answer >= 2;
}

/* We store the frequency of each element in a map, then traverse through
the map to find the GCD of the frequencies. We return true if the GCD is
greater or equal to two. */

int main() {
    vector<int> deck = {1,2,3,4,4,3,2,1};
    cout << hasGroupsSizeX(deck);

    return 0;
}

// Time Complexity: O(n) + O(n log n), we traverse the deck once. Since the map is unordered, the
// time complexity for traversing the map is O(n), and we perform gcd, O(log n) at each map element
// Space Complexity: O(n), if deck contains all distinct elements, the map will be upper bounded by
// length n