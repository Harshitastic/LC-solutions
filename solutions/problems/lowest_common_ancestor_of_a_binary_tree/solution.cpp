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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case: if root is NULL, or root is p or q, return root
        if (!root || root == p || root == q) {
            return root;
        }

        // Recur for the left and right subtrees
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // If both left and right are non-NULL, root is the LCA
        if (left && right) {
            return root;
        }

        // If only one of them is non-NULL, return that one
        return left ? left : right;
    }
};
