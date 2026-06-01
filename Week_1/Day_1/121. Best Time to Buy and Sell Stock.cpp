/*121. Best Time to Buy and Sell Stock
Solved
Easy
Topics
premium lock icon
Companies
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104*/

#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 0;
        int maxi = 0;

        while (r < prices.size()) {
            if (prices[r] > prices[l]) {
                int profit = prices[r] - prices[l];
                maxi = max(maxi, profit);
            } else {
                l = r;
            }
            r++;
        }
        return maxi;
    }
};

/* Approach -mene two pointer use kiya hai ek jo min value l or dusra jaab stock sell karna*/
/* jaab price badi hoti min se toh profit check karleta agar jyada hoga toh maxi ko update karliya*/
/*nahi toh agar kaam hai r ki value toh l =r kar diya  last mein r ko badha diya*/