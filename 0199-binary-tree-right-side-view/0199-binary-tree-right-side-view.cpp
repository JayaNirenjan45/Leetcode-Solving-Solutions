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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
         return {};
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size();
            vector<int>v;
            while(count!=0)
            {
                TreeNode * cur= q.front();
                v.push_back(cur->val);
                q.pop();
                if(cur->left)
                 q.push(cur->left);
                if(cur->right)
                 q.push(cur->right);
                count--;
            }
            res.push_back(v[v.size()-1]);
        } 
        return res;  
    }
};