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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root){
            trval(root);
        }
        return tree;
    }
    void trval(TreeNode* root){
        tree.push_back(root->val);
        if(root->left){
            trval(root->left);
        }
        if(root->right){
            trval(root->right);
        }
    }
};
