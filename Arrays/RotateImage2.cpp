// Approach : 
// First transpose the matrix by swapping the matrix[i][j] with  matirx[j][i].
// This transposes the matrix in place .
// Now reverse each row to get the final desired 90 degree rotated image .
//In this approach i have just changed the way of reverting each row .
//Instead of having a while loop inside of for loop .
//We need to swap exactly half times to reverse the row.
//And by some calculations i figured out we need to swap matrix[i][j] with matrix[i][n-1-j].

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

        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }
    }
};