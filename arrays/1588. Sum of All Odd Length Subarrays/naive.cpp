#include <iostream>
#include <vector>

using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int length = arr.size();
    int sum = 0;

    for (int i = 0; i < length; i += 1) {
        for (int j = i; j < length; j += 2) {
            for (int k = i; k <= j; k += 1) {
                sum += arr[k];
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