#include <iostream>
#include <vector>

using namespace std;

int largestAltitude(vector<int>& gain) {
    gain.insert(gain.begin(), 0);
    int maxaltitude = 0;
    
    for (size_t i = 1; i < gain.size(); i++) {
        gain[i] += gain[i - 1];
        if (gain[i] > maxaltitude) {
            maxaltitude = gain[i];
        }
        
    }

    return maxaltitude;    
}

int main() {
    vector<int> gain = {-5,1,5,0,-7};
    cout << largestAltitude(gain);
    return 0;
}