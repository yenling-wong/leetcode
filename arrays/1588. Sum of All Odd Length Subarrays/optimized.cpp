#include <iostream>
#include <vector>

using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int count, sum = 0;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        count = (((i + 1) * (n - i)) + 1) / 2;
        sum += count * arr[i];
    }
    
    return sum;
}

int main() {
    vector<int> result = {1,4,2,5,3,6};
    cout << sumOddLengthSubarrays(result);
    return 0;
}