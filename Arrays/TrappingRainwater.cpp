/*Problem : Leetcode 42
Approach:Brute Force
1.Create two arrays , Previous greater element and Next greater element array to keep track for the previous tallest building and next tallest building to a particular building.
Why are we doing it ?
For water to be captured at the top  of the building we need the tallest building to its left and tallest building to its right .Then only we will be able to store water at a particular building .
Beacuse we have calculated the amount of maximum water that can be trapped at the top of building is the minimum of both the two tallest buildings to its right and left .
if left building is taller than right then the max amount of water that we can store is upto height of right because extra waater will get spilled from the right side and vice versa.
Now thats the maximum water we can store if there are no buildings there but if there is a building there we need to subtract the hright of building from the minimum of left and right .
If its greater than 0 we can add the quantity in water variable.

Time → O(n)
Space → O(n)
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        //finding previous greatest element
        int prev[n];
        prev[0]=-1;
        int max=height[0];
        for(int i=1;i<n;i++){
            prev[i]=max;
            if(height[i]>max) max=height[i];
        }
        //finding next greater element

        max=height[n-1];
        for(int i=n-2;i>=1;i--){
           if(max<prev[i]) prev[i]=max;
            if(height[i]>max) max=height[i];
        }
prev[0]=-1;
prev[n-1]=-1;
        
        //finding capacity
int water=0;
        for(int i=1;i<n-1;i++){
            if(height[i]<prev[i]){
                water+=(prev[i]-height[i]);
            }
        }
        return water;
    }
};