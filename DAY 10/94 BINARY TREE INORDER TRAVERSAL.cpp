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
vector<int>result;
class Solution {
private:
     
     void traversal(TreeNode* temp)
     {
      if(temp==NULL)
      {
       return;
      }
      traversal(temp->left);
      result.push_back(temp->val);
      traversal(temp->right);
     }
public:
     vector<int>inorderTraversal(TreeNode* root) 
     {
      TreeNode *temp=root;
      result.clear();
      traversal(root);
      return result;
     }
};