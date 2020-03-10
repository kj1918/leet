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
    vector<vector<int>> x; 
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root){
            traval(root,0);
        }  
        return x;
    }
    void traval(TreeNode *root,int level){
        while(x.size()<=level){//level start from 0, we need 1 vector<int> in 0, 2 in 1
            x.push_back(vector<int>());
        }
        x[level].push_back(root->val);
        if(root->left)traval(root->left,level+1);
        if(root->right)traval(root->right,level+1);
    }
    
};
