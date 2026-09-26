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

    void Preorder(TreeNode* root,int subSum, int& sum){
        if(!root){
            return;
        }
        subSum=subSum*10+root->val;

        if(root->left==NULL && root->right==NULL){
            sum+=subSum;
            return;
        }

        Preorder(root->left, subSum, sum);
        Preorder(root->right, subSum, sum);
    }
    
    int sumNumbers(TreeNode* root){
        int sum =0;

        Preorder(root,0, sum);


        return sum;
    }
};