/*
LeetCode 42: Trapping Rain Water
Approach: Two-Pointer Optimization

Observation:
- To calculate water trapped at a particular building, we only need:
    1. The tallest building to its left (leftMax)
    2. The tallest building to its right (rightMax)
- Water at a building = min(leftMax, rightMax) - height[i] (if positive)

Optimization Idea:
- Instead of precomputing two arrays for leftMax and rightMax (O(n) space),
  we can use two pointers, moving from both ends of the array.
- Maintain:
    * left pointer and leftMax (tallest building seen from the left)
    * right pointer and rightMax (tallest building seen from the right)
- At each step, move the pointer pointing to the smaller height, 
  update the corresponding max, and calculate water trapped.

Benefits:
- Time Complexity: O(n) — single pass through the array
- Space Complexity: O(1) — only a few variables used

This approach efficiently calculates trapped water while scanning the array only once.
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int leftMax=height[left];
        int rightMax=height[right];
        int water=0;

        while(left<right){
            if(height[left]<height[right]){
                if(leftMax>height[left]){
                    water+=leftMax-height[left];
                }
                else leftMax=height[left];
                left++;
            }
            else{
                if(rightMax>height[right]){
                    water+=rightMax-height[right];

                }
                else rightMax=height[right];
                right--;
            }
        }
        return water;

    }
};