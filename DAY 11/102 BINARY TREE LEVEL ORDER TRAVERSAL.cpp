/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<vector<int>>result;
    void helper(TreeNode* root,int level)
    {
     if(result.size()<level+1)
     {
      vector<int>temp;
      temp.clear();
      temp.push_back(root->val);
      result.push_back(temp);
     }
     else
     {
      result[level].push_back(root->val);
     }
     if(root->left!=NULL)
     {
      helper(root->left,level+1);
     }
     if(root->right!=NULL)
     {
      helper(root->right,level+1);
     }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
     result.clear();
     if(root!=NULL)
     {
      helper(root,0);
     }
     return result;
    }
};