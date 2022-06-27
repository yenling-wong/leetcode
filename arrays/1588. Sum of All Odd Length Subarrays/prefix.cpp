#include <iostream>
#include <vector>

using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int sum = 0;
    int n = arr.size();
    
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j += 2) {
            if (i == 0) {
                sum += arr[j];
            } else {
                sum += arr[j] - arr[i - 1];
            }
        }
    }
    
    return sum;
}

int main() {
    vector<int> result = {1,4,2,5,3,6};
    cout << sumOddLengthSubarrays(result);
    return 0;
}