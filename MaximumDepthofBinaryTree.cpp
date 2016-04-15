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
    int maxDepth(TreeNode* root) {
        int depth = 0;
        vector<int> vecstack;
        
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 1;
        
        preOrder(depth, vecstack, root);
        return depth;
    }
    
    void preOrder (int& depth, vector<int>& vecstack, TreeNode* root) {
        // Push current node val to vec
        vecstack.push_back(root->val);
        
        // Check if the size of vector is larger than current depth
        // assign new depth if exists
        if (vecstack.size() >= depth) {
           depth = vecstack.size();
        }
        
        // Check the left child
        if (root->left != NULL) {
            preOrder(depth, vecstack, root->left);
        }
        
        // Check the right child
        if (root->right != NULL) {
            preOrder(depth, vecstack, root->right);
        }
        
        // if does not have left or right child, then pop
        vecstack.pop_back();
    }
};