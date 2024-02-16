//Invert Binary Tree
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        function<void(TreeNode*)> dfs = [&](TreeNode* root) {
            if (!root) {
                return;
            }
            swap(root->left, root->right);
            dfs(root->left);
            dfs(root->right);
        };
        dfs(root);
        return root;
    }
};