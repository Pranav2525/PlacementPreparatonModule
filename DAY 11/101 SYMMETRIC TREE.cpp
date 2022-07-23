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
    bool helper(TreeNode* left,TreeNode* right)
    {
     if(left==NULL&&right!=NULL)
     {
      return false;
     }
     else if(left!=NULL&&right==NULL)
     {
      return false;
     }
     else if(left==NULL&&right==NULL)
     {
      return true;
     }
     else if(left->val!=right->val)
     {
      return false;
     }
     if((helper(left->right,right->left))&&(helper(left->left,right->right)))
     {
      return true;
     }
     return false;
    }
    bool isSymmetric(TreeNode* root) {
     return helper(root->left,root->right);  
    }
};