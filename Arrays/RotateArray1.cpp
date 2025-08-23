#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




// Approach: Reverse method for array rotation
// 1. Reverse the entire array.
// 2. Reverse the first k elements.
// 3. Reverse the remaining (n-k) elements.
// This ensures elements are rotated right by k positions in O(n) time, O(1) space.




class Solution {
public:
    void ReversePart(int i, int j, vector<int>& nums) {
        while(i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n <= 1) return;

        k %= n;
        if(k == 0) return;

        ReversePart(0, n-1, nums);
        ReversePart(0, k-1, nums);
        ReversePart(k, n-1, nums);
    }
};






