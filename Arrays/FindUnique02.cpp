/*
Approach: XOR Trick
- XOR has properties: a^a = 0, a^0 = a, and it's commutative & associative.
- So if we XOR all numbers, pairs cancel out and only the unique number remains.
- Time Complexity: O(n)
- Space Complexity: O(1)
*/
#include <iostream>
#include <algorithm>
using namespace std;

int findUniqueXOR(int arr[], int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans ^= arr[i];
    }
    return ans;
}


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
    cout << "The unique number is : " << findUniqueXOR(arr,n);
}