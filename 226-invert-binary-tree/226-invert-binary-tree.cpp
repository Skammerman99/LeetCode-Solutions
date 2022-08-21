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
        if(root == nullptr or (root -> left == nullptr and root -> right == nullptr)){
            return root;
        }
        TreeNode* leftTmp = nullptr;
        if(root-> left != nullptr){
            leftTmp = invertTree(root->left);
        }
        TreeNode* rightTmp = nullptr;
        if(root -> right != nullptr){
            rightTmp = invertTree(root->right);
        }
        root->left = rightTmp;
        root->right = leftTmp;
        
        return root;
    }
};