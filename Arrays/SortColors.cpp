/*
Approach:
---------
We need to sort an array containing only 0s, 1s, and 2s (colors).
This solution uses a simple counting sort method:

1. Traverse the array once and count the number of 0s, 1s, and 2s.
2. Overwrite the array:
   - First place all 0s,
   - Then all 1s,
   - Finally all 2s.

Time Complexity: O(n)  (one pass for counting + one pass for rewriting)
Space Complexity: O(1) (no extra array used)
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int red = 0, white = 0, blue = 0;

        // Count the number of 0s, 1s, and 2s
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) red++;
            else if(nums[i] == 1) white++;
            else blue++;
        }

        // Overwrite the array based on counts
        for(int i = 0; i < n; i++) {
            if(i < red) nums[i] = 0;
            else if(i < red + white) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};
