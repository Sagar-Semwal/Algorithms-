/*
    Program: Find the 3 largest distinct elements in an array

    Approach:
    - We maintain three variables (max1, max2, max3) to store the 1st, 2nd, and 3rd largest elements.
    - While iterating through the array:
        1. If the current element is greater than max1 → shift max1→max2, max2→max3, and update max1.
        2. Else if it is greater than max2 (and not equal to max1) → shift max2→max3, and update max2.
        3. Else if it is greater than max3 (and not equal to max1 or max2) → update max3.
    - At the end, max1, max2, max3 hold the 3 largest distinct values.
    - If the array has fewer than 3 distinct elements, we handle that case separately.
    
    Time Complexity: O(n)   (single pass through array)
    Space Complexity: O(1)  (constant extra variables)
*/
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 3)
    {
        cout << "Array must have at least 3 elements." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3 && arr[i] != max1 && arr[i] != max2)
        {
            max3 = arr[i];
        }
    }

    if (max3 == INT_MIN)
    {
        cout << "There is no distinct third largest element." << endl;
    }
    else
    {
        cout << "The 3 largest numbers in the array are: " << max1 << " " << max2 << " " << max3 << endl;
    }

    return 0;
}
