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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int> ans;
        if(root==NULL) return ans;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* x=s.top();
            if(x->left!=NULL)
            {
                s.push(x->left);
                x->left=NULL;
            }
            else
            {
                ans.push_back(x->val);
                s.pop();
                if(x->right!=NULL)
                    s.push(x->right);
            }
        }
        return ans;
    }
};