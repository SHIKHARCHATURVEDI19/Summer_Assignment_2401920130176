/*283. Move Zeroes
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1*/
 
#include<vector>
#include<algorithm>
using namespace std ;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j = 0 ; j<n ; j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        
        }
    }
};

/*ismein 2 pointer use kiya i 0 se or j 0 se itrate kardiya or jahan nums[j]= 0 nahi mila swap karke i ko increse kar diya*/