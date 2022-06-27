#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    
    int count = 0;
    
    for (size_t i = 0; i < seats.size(); i++) {
        count += abs(seats[i] - students[i]);
    }
    
    return count;
}

int main() {
    vector<int> students = {3,1,5}, seats = {2,7,4};
    cout << minMovesToSeat(seats, students);
    return 0;
}