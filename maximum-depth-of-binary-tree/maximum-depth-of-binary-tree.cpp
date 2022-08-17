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
    
    int recursiveDepth(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int leftDepth, rightDepth;
        if(root -> left != nullptr){
            leftDepth = recursiveDepth(root->left);
        }else{
            leftDepth = 0;
        }
        if(root->right != nullptr){
            rightDepth = recursiveDepth(root->right);
        }else{
            rightDepth = 0;
        }
        if(leftDepth > rightDepth){
            return leftDepth + 1;
        }else{
            return rightDepth + 1;
        }
    }
    
    int maxDepth(TreeNode* root) {
        return recursiveDepth(root);
    }
};