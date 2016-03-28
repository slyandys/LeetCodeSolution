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
    TreeNode* invertTree(TreeNode* root) {
        if (root != NULL) {
            TreeNode* tmp;
            tmp = root->left;
            root->left = root->right;
            root->right = tmp;
            
            if (root->left != NULL) {
                invertTree(root->left);
            }
            
            if (root->right != NULL) {
                invertTree(root->right);
            }
        }
        
        return root;
    }
};