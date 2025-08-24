/*
=============================================
 Program: Sort Binary Array (0s and 1s)
 Description:
    - This program sorts an array consisting only 
      of 0s and 1s without using any built-in sort.
    - Approach:
        1. Count how many 0s are present.
        2. Fill the first 'countZero' positions with 0.
        3. Fill the remaining positions with 1.
    - Time Complexity: O(n)
    - Space Complexity: O(1)  (in-place sorting)
=============================================
*/

#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int>& v) {
    int n = v.size();
    int countZero = 0;

    // Step 1: Count the number of 0s
    for (int num : v) {
        if (num == 0) countZero++;
    }

    // Step 2: Place 0s in front
    for (int i = 0; i < countZero; i++) {
        v[i] = 0;
    }

    // Step 3: Place 1s afterwards
    for (int i = countZero; i < n; i++) {
        v[i] = 1;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the array (only 0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Before Sorting:\n";
    for (int x : v) cout << x << " ";
    cout << endl;

    sortArray(v);

    cout << "After Sorting:\n";
    for (int x : v) cout << x << " ";
}
