/*
Approach:
1. Find pivot index `idx` (first element from right where nums[i] < nums[i+1]).
2. If no pivot → array is descending → reverse entire array (last → first permutation).
3. Otherwise, find the smallest element greater than nums[idx] by scanning from right.
4. Swap pivot with that element.
5. Reverse the suffix (part after idx) to make it the smallest arrangement.
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;

        // Step 1: find pivot
        for(int i = n-1; i > 0; i--) {
            if(nums[i-1] < nums[i]) {
                pos = i;
                break;
            }
        }


        if(pos == 0) {
            reverse(nums.begin(), nums.end());
        } 
        else {
            int idx = -1;
            
            for(int i = n-1; i >= pos; i--) {
                if(nums[pos-1] < nums[i]) {
                    idx = i;
                    break;
                }
            }
            swap(nums[pos-1], nums[idx]);

            
            reverse(nums.begin() + pos, nums.end());
        }
    }
};