/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    int lm = minDepth(root->left);
    int rm = minDepth(root->right);
    if (root->left == NULL && root->right == NULL)
        return 1;
    if (root->right == NULL)
        return 1 + lm;
    if (root->left == NULL)
        return 1 + rm;
    return 1 + fmin(lm, rm);
}