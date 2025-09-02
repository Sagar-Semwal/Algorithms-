#include <iostream>
#include <vector>
using namespace std;

/*
 Question:
Write a program to input a square matrix and print its transpose.

 Algorithm:
1. Take input m (size of the square matrix).
2. Read all m × m elements into the matrix.
3. For each i from 0 to m-1, and for each j from i+1 to m-1:
      - Swap arr[i][j] with arr[j][i].
4. Print the final transposed matrix.
*/

int main() {
    int m;
    cout << "Enter the number of rows in the array: ";
    cin >> m;

    // Use vector instead of variable length array
    vector<vector<int>> arr(m, vector<int>(m));

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Transpose (swap only upper-triangle elements with lower-triangle ones)
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "\nTransposed Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
