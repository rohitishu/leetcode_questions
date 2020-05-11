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
    int maxPathSum(TreeNode* root) {
      int global_max=INT_MIN;
       help(root,global_max);
        return global_max;
    }
   int help(TreeNode *root,int &global_max)
 {
     if(root==NULL)
     return 0;
     int lh=help(root->left,global_max);
     int rh=help(root->right,global_max);
     int c1=root->val;
     int c2=lh+root->val;
     int c3=root->val+rh;
     int c4=lh+root->val+rh;
     global_max=max(global_max,max(max(c1,c2),max(c3,c4)));
     return max(max(lh+root->val,rh+root->val),root->val);
 }
};
