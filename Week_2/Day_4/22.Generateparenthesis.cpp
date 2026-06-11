/*22. Generate Parentheses
Solved
Medium
Topics
premium lock icon
Companies
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8*/

#include<string>
#include<vector>
using namespace std;
class Solution {
public:
void backtrack(int open, int close, int n, string current, vector<string>& result) {
        if (current.length() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
            backtrack(open + 1, close, n, current + "(", result);
        }
        if (close < open) {
            backtrack(open, close + 1, n, current + ")", result);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(0, 0, n, "", result);
        return result;
    }
};