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

    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int instrt, int inEnd, int poststrt, int postEnd){
        if(instrt> inEnd){
            return NULL;
        }

        TreeNode* root = new TreeNode(postorder[postEnd]);

       int i = instrt;

        for( ; i<=inEnd; i++){
            if(inorder[i]==root->val){
                break;
            }
        }

        int leftsize = i-instrt;
        int rightsize = inEnd-i; 

        root->left = solve(inorder,postorder, instrt, i-1, poststrt, poststrt+leftsize-1);
        root->right = solve(inorder, postorder, i+1, inEnd, postEnd-rightsize, postEnd-1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size()-1;

        int instrt =0;
        int inEnd = n;

        int poststrt = 0;
        int postEnd = n;

        
        return solve(inorder,postorder, instrt, inEnd, poststrt, postEnd);
    }
};