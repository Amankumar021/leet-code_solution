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

    vector<vector<int>> res;

    void check(TreeNode* root, vector<int> temp, int sum, int& targetSum){
        if(root== NULL)
            return;

        sum+=root->val;
        temp.push_back(root->val);

        if(root->left ==NULL && root->right==NULL){
            if(sum== targetSum)
                res.push_back(temp);
            return;
        }

        check(root->left, temp, sum, targetSum);
        check(root->right, temp, sum, targetSum);
    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<int> temp;

       int sum =0;
       check(root, temp, sum ,targetSum);

       return res;
    }
};