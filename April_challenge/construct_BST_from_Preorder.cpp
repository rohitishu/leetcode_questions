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
    TreeNode* bstFromPreorder(vector<int>& v) {
      TreeNode *root=NULL;
        for(int i=0;i<v.size();i++)
        {
            root=insert(root,v[i]);
        }
        return root;
    }
    TreeNode* insert(TreeNode *root,int x)
    {
        if(!root)
        {
            TreeNode *newroot=new TreeNode(x);
            root=newroot;
        }
        else if(x<root->val)
            root->left=insert(root->left,x);
        else
            root->right=insert(root->right,x);
        return root;
    }
};
