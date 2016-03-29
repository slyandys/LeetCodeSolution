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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preOrderVec;
        vector<int> tmpVec;
        if (root != NULL) {
            preOrderVec.push_back(root->val);
        } else {
            return preOrderVec;
        }
        
        if (root->left != NULL) {
            tmpVec = preorderTraversal(root->left);
            preOrderVec.insert(preOrderVec.end(), tmpVec.begin(), tmpVec.end());
        }
        
        if (root->right != NULL) {
            tmpVec = preorderTraversal(root->right);
            preOrderVec.insert(preOrderVec.end(), tmpVec.begin(), tmpVec.end());
        }
        
        return preOrderVec;
    }
};