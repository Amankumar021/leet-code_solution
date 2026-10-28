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
void preOrder(TreeNode* root,string path, vector<string>& ans){
    if(!root){
        return;
    }
    path+=to_string(root->val);

    if(root->left==NULL && root->right==NULL){
        ans.push_back(path);
        return;
    }

    path+="->";

    preOrder(root->left, path, ans);
    preOrder(root->right, path, ans);
}
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        preOrder(root,"", ans);

        return ans;
    }
};