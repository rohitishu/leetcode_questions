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
    int diameterOfBinaryTree(TreeNode* root) {
        return helper(root).first;
    }
    pair<int,int> helper(TreeNode *root)
    {
        if(!root)
            return {0,0};
        pair<int,int> left=helper(root->left);
        pair<int,int> right=helper(root->right);
        int diameter=max(max(left.first,right.first),(left.second+right.second));
        return {diameter,max(left.second,right.second)+1};
    }
   
};
