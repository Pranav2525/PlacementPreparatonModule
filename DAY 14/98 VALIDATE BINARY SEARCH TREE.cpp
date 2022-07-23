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
    bool helper(TreeNode*root,long val1,long val2)
    {
     if(root->val<=val1||root->val>=val2)
     {
      return false;
     }
     if(root->left==NULL&&root->right==NULL)
     {
      return true;
     }
     if(root->left!=NULL&&root->right!=NULL)
     {
      return helper(root->left,val1,root->val)&&helper(root->right,root->val,val2);
     }
     if(root->left!=NULL)
     {
      return helper(root->left,val1,root->val);
     }
     if(root->right!=NULL)
     {
      return helper(root->right,root->val,val2);
     }
     return false;
    }
public:
    bool isValidBST(TreeNode* root) {
     return helper(root,LONG_MIN,LONG_MAX);   
    }
};