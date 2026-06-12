/*5. Longest Palindromic Substring
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.*/
#include<string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
          int start = 0, maxLen = 1;
        int n = s.length();

        for(int i = 0; i < n; i++) {

            
            int l = i, r = i;
            while(l >= 0 && r < n && s[l] == s[r]) {
                if(r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }

            l = i;
            r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r]) {
                if(r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, maxLen);
    }
};