class Solution {
public:
    void solve(TreeNode* root, string path, vector<string>& result) {
        if (!root) return;

        // Add current node to path
        if (path.size() == 0)
            path = to_string(root->val);
        else
            path += "->" + to_string(root->val);

        // If leaf node, store path
        if (!root->left && !root->right) {
            result.push_back(path);
            return;
        }

        // Traverse left and right
        solve(root->left, path, result);
        solve(root->right, path, result);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        solve(root, "", result);
        return result;
    }
};
