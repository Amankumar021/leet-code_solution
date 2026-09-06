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
bool inOrder(TreeNode* root, int sum, int& targetSum){
    if(!root)
        return false;

    sum+=root->val;

    if(root->left == NULL && root->right == NULL){
        if(sum== targetSum)
            return true;
        return false;
    }

    bool left = inOrder(root->left, sum, targetSum);
    bool right = inOrder(root->right, sum , targetSum);

    return left || right;
}
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool ans = inOrder(root, sum, targetSum);

        return ans;
    }
};