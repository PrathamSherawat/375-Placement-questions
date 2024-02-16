//Reverse Level Order Traversal
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q{{root}};
        while (!q.empty()) {
            vector<int> t;
            for (int i = q.size(); i; --i) {
                auto node = q.front();
                q.pop();
                t.emplace_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ans.emplace_back(t);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};