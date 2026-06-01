#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

/* Approach -- two pointer use kiya mene pahla i o se or j 1 se intilise   diya*/
/* usmein tha ki pahle elemnts ko change karna sare unique elment se toh mene nums[i]=nums[j] kar diya*/
/* or jaab element unique na ho tabh i ko aage badh diya or nums ko updtae kardiya*/
/*last mein since i index hai toh i +1 return kar diya*/