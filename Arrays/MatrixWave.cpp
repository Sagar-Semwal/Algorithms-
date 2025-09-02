#include<iostream>
#include<algorithm>
using namespace std;

// Program to print matrix in different traversal patterns
int main() {
    int m, n;
    cout << "Enter rows and columns of first matrix (m n): ";
    cin >> m >> n;

    int A[m][n];

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\n1. Row-wise Zigzag Traversal (starting from first row):" << endl;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) cout << A[i][j] << " ";
        } else {
            for (int j = n - 1; j >= 0; j--) cout << A[i][j] << " ";
        }
    }

    cout << "\n\n2. Row-wise Zigzag Traversal (starting from last row):" << endl;
    for (int i = m - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) cout << A[i][j] << " ";
        } else {
            for (int j = n - 1; j >= 0; j--) cout << A[i][j] << " ";
        }
    }

    cout << "\n\n3. Column-wise Zigzag Traversal (starting from first column):" << endl;
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < m; i++) cout << A[i][j] << " ";
        } else {
            for (int i = m - 1; i >= 0; i--) cout << A[i][j] << " ";
        }
    }

    cout << "\n\n4. Column-wise Zigzag Traversal (starting from last column):" << endl;
    for (int j = n - 1; j >= 0; j--) {
        if (j % 2 == 0) {
            for (int i = 0; i < m; i++) cout << A[i][j] << " ";
        } else {
            for (int i = m - 1; i >= 0; i--) cout << A[i][j] << " ";
        }
    }

    cout << endl;
}
