// Approach : 
// First transpose the matrix by swapping the matrix[i][j] with  matirx[j][i].
// This transposes the matrix in place .
// Now reverse each row to get the final desired 90 degree rotated image .
//In this approach for reversing each row i have used two pointer variables i and j which starts from first index and last index .
//Whenever i >= j means we have already swapped n/2 elements and then we need to break the loop and move into the next row.


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int k=0;k<n;k++){
            int i=0;
            int j=n-1;
            while(i<=j){
                swap(matrix[k][i],matrix[k][j]);
                i++;
                j--;
            }
        }
    }
};