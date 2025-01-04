/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int diameter;
int getWidth(struct TreeNode* root)
{
    if(root==NULL)
     return 0;
    int lw=getWidth(root->left);
    int rw=getWidth(root->right);
    diameter=fmax(diameter,lw+rw);
    return fmax(lw,rw)+1;
}
int diameterOfBinaryTree(struct TreeNode* root) 
{
    diameter=0;
    getWidth(root);
    return diameter;        
}