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
    void helper(TreeNode* root1,TreeNode* root2)
    {
     root1->val=root1->val+root2->val;
     if(root1->left!=NULL&&root2->left!=NULL)
     {
      helper(root1->left,root2->left);
     }
     else if(root1->left==NULL)
     {
      root1->left=root2->left;
     }
     if(root1->right!=NULL&&root2->right!=NULL)
     {
      helper(root1->right,root2->right);
     }
     else if(root1->right==NULL)
     {
      root1->right=root2->right;
     }
    
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
     if(root1==NULL)
     {
      return root2;
     }
     else if(root2==NULL)
     {
      return root1;
     }
     helper(root1,root2);
     return root1;
    }
};