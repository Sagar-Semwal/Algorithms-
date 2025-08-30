/*
Approach: Sorting
- Sort the array so that duplicates appear together.
- Traverse in steps of 2 (pair checking). If a pair mismatch is found, that is the unique number.
- If all pairs match, then the last element is the unique one.
- Time Complexity: O(n log n) (due to sorting)
- Space Complexity: O(1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int uniqueNumber = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            uniqueNumber = arr[i];
            break;
        }
    }
    if (uniqueNumber == -1)
    {
        uniqueNumber = arr[n - 1];
    }

    cout << "The unique number is : " << uniqueNumber;
}