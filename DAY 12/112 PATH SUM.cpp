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
public:
    bool helper(TreeNode* root,int targetsum)
    {
     if(root==NULL)
     {
      return false;
     }
     else if(root->val==targetsum&&root->left==NULL&&root->right==NULL)
     {
      return true;
     }
     return helper(root->left,targetsum-root->val)||helper(root->right,targetsum-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
     return helper(root,targetSum);   
    }
};