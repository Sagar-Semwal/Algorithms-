/*
Approach :
1. Find pivot index `idx` (first element from right where nums[i] < nums[i+1]).
2. If no pivot → reverse entire array (last → first permutation).
3. Reverse suffix after pivot → makes it ascending.
4. In ascending suffix, scan left-to-right to find first element > nums[idx].
5. Swap pivot with that element.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;

    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) {
        reverse(nums.begin(),nums.end());
        return;

    }
        reverse(nums.begin()+idx+1,nums.end());

        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]) {
                j=i;
                break;
            }
        }

    swap(nums[idx],nums[j]);
    return;
    }
};