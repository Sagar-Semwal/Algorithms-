#include <bits/stdc++.h>
using namespace std;

/*
Intuition:
We need to merge nums2 into nums1 in sorted order.  
Here we insert each element of nums2 into its correct position in nums1 
by shifting elements to the right (like insertion sort).

Approach:
- Maintain:
    j → index for nums2
    len → current valid length of nums1
    pos → last insertion position (to avoid rescanning from start)
- For each nums2[j]:
    - Find the first index i in nums1 (starting from pos) where nums1[i] > nums2[j].
    - Shift all elements from i to len-1 one step right.
    - Place nums2[j] at nums1[i].
    - Update pos to i and increment len.
- Repeat until all nums2 elements are inserted.
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;       // pointer for nums2
        int len = m;     // current valid length of nums1
        int pos = 0;     // last insertion position in nums1

        while (j < n) {
            int i = pos;
            while (i < len && nums1[i] <= nums2[j]) i++;

            // shift nums1 to make space
            for (int k = len; k > i; k--) {
                nums1[k] = nums1[k - 1];
            }

            nums1[i] = nums2[j]; // insert nums2[j] at correct place
            j++;
            len++;
            pos = i; // optimization: next search can start from here
        }
    }
};
