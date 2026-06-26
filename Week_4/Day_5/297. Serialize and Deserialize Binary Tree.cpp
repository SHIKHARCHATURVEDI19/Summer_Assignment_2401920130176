/*297. Serialize and Deserialize Binary Tree
Solved
Hard
Topics
premium lock icon
Companies
Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

Clarification: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.

 

Example 1:


Input: root = [1,2,3,null,null,4,5]
Output: [1,2,3,null,null,4,5]
Example 2:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 104].
-1000 <= Node.val <= 1000*/
 #include<vector>
#include <cstddef>
#include <queue>
#include <string>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};
class Codec {
public:
  void dfs(TreeNode* root, string &s) {

        if (root == NULL) {
            s += "N,";
            return;
        }

        s += to_string(root->val) + ",";

        dfs(root->left, s);
        dfs(root->right, s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
         string s = "";

        dfs(root, s);

        return s;
    }
   TreeNode* build(string &data, int &i) {

        if (data[i] == 'N') {
            i += 2;
            return NULL;
        }

        string num = "";

        while (data[i] != ',') {
            num += data[i];
            i++;
        }

        i++;

        TreeNode* root = new TreeNode(stoi(num));

        root->left = build(data, i);
        root->right = build(data, i);

        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
         int i = 0;

        return build(data, i);
    }
};
