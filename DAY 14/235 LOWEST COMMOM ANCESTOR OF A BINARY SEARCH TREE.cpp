/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* helper(TreeNode* root,int p,int q)
    {
     if(root->val>p&&root->val>q)
     {
      return helper(root->left,p,q);
     }
     if(root->val<p&&root->val<q)
     {
      return helper(root->right,p,q);
     }
     return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     return helper(root,p->val,q->val);   
    }
};