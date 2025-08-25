/*
Approach (Dutch National Flag):
-------------------------------
- Use 3 pointers: low, mid, high
- [0..low-1] = 0s, [low..mid-1] = 1s, [mid..high] = unprocessed, [high+1..n-1] = 2s
- While mid <= high:
    - If nums[mid] == 0 → swap with low, move low & mid
    - If nums[mid] == 1 → just move mid
    - If nums[mid] == 2 → swap with high, move high
- Done when mid > high.

Time: O(n),  Space: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high) {
            if (nums[mid] == 0) swap(nums[mid++], nums[low++]);
            else if (nums[mid] == 1) mid++;
            else swap(nums[mid], nums[high--]);
        }
    }
};
