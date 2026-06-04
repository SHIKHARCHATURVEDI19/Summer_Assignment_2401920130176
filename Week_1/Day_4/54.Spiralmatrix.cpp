/*
54. Spiral Matrix
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100*/

#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rs =0,re=matrix.size()-1;
        int cs=0,ce=matrix[0].size()-1;
        vector<int>result;
        while(rs<=re && cs<=ce){
            for(int i = cs;i<=ce;i++){
                result.push_back(matrix[rs][i]);
            }
            rs=rs+1;
            for(int i=rs;i<=re;i++){
                result.push_back(matrix[i][ce]);
            }
            ce=ce-1;
            if(rs<=re){
            for(int i =ce;i>=cs;i--){
                result.push_back(matrix[re][i]);
            }
            re=re-1;
            }
            
            if(cs<=ce){
                for(int i = re;i>=rs;i--){
                    result.push_back(matrix[i][cs]);
                }
                cs=cs+1;
            }
        }
        return result;
    }
};

/*iss ki practice kai baar ki thi 4 vraiable banye row start or end or col start or end */
/**/