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
    int c=0;
    vector<int>v;
    int inorderTraversal(TreeNode* root) 
        {
            if(root==NULL)
            return 0;
            inorderTraversal(root->left);
            v.push_back(root->val);
            inorderTraversal(root->right); 
            c=v.size();
            return c;
        }
    int countNodes(TreeNode* root) 
    {
        return inorderTraversal(root);
    }
};