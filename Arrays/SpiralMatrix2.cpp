/*Problem:Spiral Matrix 2(Leetcode 59)

Approach:
.We will maintain 4 pointers : 2 for rows representing minrow and maxrow and simultaneously 2 for columns mincolumn and maxcolumn.
.We will also maintain a count variable which will keep track of how many elements have been inserted.
.For Spiral Printing ,We need to traverse the matrix in this form: right -> down -> left -> up and repeat the process until count = n*n elements .
.After each insertion we will update the count by adding 1 . 

*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n,0));
        int minr=0;
        int maxr=n-1;
        int minc=0;
        int maxc=n-1;
        int count=1;
        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc && count <=n*n ;i++){
                v[minr][i]=count++;
                }
                minr++;

            for(int i=minr;i<=maxr && count<=n*n;i++){
                v[i][maxc]=count++;
            }
            maxc--;
            for(int i=maxc;i>=minc && count<=n*n;i--){
                v[maxr][i]=count++;
            }
            maxr--;
            for(int i=maxr;i>=minr&& count<=n*n;i--){
                v[i][minc]=count++;

            }
                minc++;


            
        }
        return v;
    }
};