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
    vector<int> tree;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root){
            trval(root);
        }
        return tree;
    }
    void trval(TreeNode* root){
        if(root->left){
            postorderTraversal(root->left);
        }
        if(root->right){
            postorderTraversal(root->right);
        }
        tree.push_back(root->val);
    }
};
