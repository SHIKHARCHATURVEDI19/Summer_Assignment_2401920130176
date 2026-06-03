/*11. Container With Most Water
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104*/

#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int amt = 0;
        int maxi = INT_MIN;
        int i = 0;
        int j = n - 1;
        while (i < j) {

            amt = (j - i) * (min(height[i], height[j]));
            maxi = max(maxi, amt);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxi;
    }
};

/*2 pointer approach kiya mene i = 0 or j n -1 se jonsa chhota hota usee mein increase or decrese kar deta or continous choose karta rahta hun*/
/* i++ height chhoti hui toh nahi toh j -- or usse mein my fav maxi mein dal deta hun*/