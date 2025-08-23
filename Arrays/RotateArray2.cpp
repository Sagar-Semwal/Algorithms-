#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




/*
 * Rotate Array (Cyclic Replacement Method)
 *
 * Intuition:
 * - Think of the array as a circle: each element "jumps" k steps forward.
 * - These jumps naturally form disjoint cycles.
 *
 * Approach:
 * - Each element is moved to its new index: (i + k) % n.
 * - This forms "cycles" in the array. Each cycle length = n / gcd(n, k).
 * - There are exactly gcd(n, k) cycles, covering all n elements.
 * - We follow each cycle, placing elements in their correct positions,
 *   until all elements are moved.
 *
 * Why it works:
 * - The gcd ensures we don't revisit already placed elements.
 * - Every element is moved exactly once → O(n) time, O(1) extra space.
 *
 * Example: n = 6, k = 2
 *   Cycles = gcd(6, 2) = 2
 *   Cycle 1: 0 → 2 → 4 → 0
 *   Cycle 2: 1 → 3 → 5 → 1
 *
 * Complexity:
 * - Time: O(n)  (each element visited once)
 * - Space: O(1) (in-place rotation)
 */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        if(k==0) return;


        int count=0;

        for(int start=0;count<n;start++){    //This for loop here represent how many number of cycles, we need to change the places of all n elements .
            int current=start;
            int prev=nums[start];


            while(true){
                int next=(current+k)%n;
                int temp=nums[next];
                nums[next]=prev;
                prev=temp;                         //THis whole while loop code here just reperesents the completion of one cycle 
                current=next;
                count++;

                if(current==start) break;
            }
        }
    }
};


//If you dont understand the logic ,just try to dry run it for small example .You will eventually figure it out.