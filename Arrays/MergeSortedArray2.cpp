#include <bits/stdc++.h>
using namespace std;

/*
Intuition:
We need to merge nums2 into nums1 in sorted order.  
Since nums1 has enough space at the end, we can start filling from the back 
to avoid overwriting elements in nums1.

Approach:
- Use three pointers: 
    i → last valid element in nums1 (m-1)
    j → last element in nums2 (n-1)
    k → last index of nums1 (m+n-1)
- Compare nums1[i] and nums2[j], put the larger one at nums1[k].
- Move the corresponding pointer backward.
- Continue until all elements of nums2 are placed.
*/

class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;      // last valid element in nums1
    int j = n - 1;      // last element in nums2
    int k = m + n - 1;  // last index in nums1 (for placement)

    while (j >= 0) {
      if (i >= 0 && nums1[i] > nums2[j])
        nums1[k--] = nums1[i--];
      else
        nums1[k--] = nums2[j--];
    }
  }
};
