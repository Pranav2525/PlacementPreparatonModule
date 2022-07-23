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
    void insert(TreeNode* root, int val)
    {
     if(root->val>val&&root->left==NULL)
     {
      root->left=new TreeNode(val);
      return;
     }
     if(root->val>val&&root->left!=NULL)
     {
      insert(root->left,val);
      return;
     }
     if(root->val<val&&root->right==NULL)
     {
      root->right=new TreeNode(val);
      return;
     }
     if(root->val<val&&root->right!=NULL)
     {
      insert(root->right,val);
      return;
     }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
     if(root==NULL)
     {
      TreeNode *ans=new TreeNode(val);
      return ans;
     }
     insert(root,val);
     return root;
    }
};