/*
=============================================
 Program: Sort Binary Array (0s and 1s)
 Description:
    - This program sorts an array consisting only 
      of 0s and 1s without using any built-in sort.

 Technique (Two-Pointer Method):
    - Use two pointers: one starting from the left (i), 
      and one from the right (j).
    - Move `i` forward if the element is 0 (already in place).
    - Move `j` backward if the element is 1 (already in place).
    - If v[i] == 1 and v[j] == 0, swap them to correct positions.
    - Continue until i and j cross.
    - This ensures all 0s are shifted to the left and 1s to the right.

 Complexity:
    - Time Complexity: O(n)   (single pass)
    - Space Complexity: O(1)  (in-place sorting)
=============================================
*/

#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] == 0)
            i++;
        else if (v[j] == 1)
            j--;
        else
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the array (only 0s and 1s): ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Before Sorting:\n";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    sortArray(v);

    cout << "After Sorting:\n";
    for (int x : v)
        cout << x << " ";
}
