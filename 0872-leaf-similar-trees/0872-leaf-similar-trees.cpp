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
    void pushVec(TreeNode* root, vector<int>& ans){
        if(!root){
            return ;
        }

        pushVec(root->left, ans);
        pushVec(root->right, ans);

        if(root->left == NULL && root->right==NULL){
            ans.push_back(root->val);
        }
    }

   

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        vector<int> ans2;
        int i =0;

        pushVec(root1, ans);
        pushVec(root2, ans2);


        return ans==ans2;
    }
};