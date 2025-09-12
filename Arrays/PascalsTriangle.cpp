/* Pascals Triangle (Leetcode 118)
Approach:
1. Initialise a loop and push back a 1Dvector from size 1 to the given n into a 2d vector to store the digits .
2. Once you push back the vector then initialise a second loop to insert digits in them . 
3.By observation you will notice that whenever column is zero or rownumber and column number are eqaul the value at that particular cell is 1.
4.Else the value would be calculated as the element just above it + the element just above it - 1 index . 
                       */

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>v;
      

        for(int i=0;i<n;i++){
            vector<int>a(i+1);
            v.push_back(a);
            for(int j=0;j<=i;j++){
                if(i==j || j==0) v[i][j]=1;
                else{
                    v[i][j]=v[i-1][j]+v[i-1][j-1];
                }
            }
        }
        return v;
    }
};