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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* tmp;
        if(root==nullptr){
            return root;
        }
        else if(root->left == nullptr && root->right == nullptr){
            return root;
        }else{
            tmp = root->left;
            root->left = invertTree(root->right);
            root->right = invertTree(tmp);
            return root;
        }
        /*
        else if(root->left == nullptr){
            root->left = invertTree(root->right);
            root->right == nullptr;
        }else if(root->right == nullptr){
            root->right = invertTree(root->left);
            root->left = nullptr;
        }else{
            
        }
        */
        
    }
};