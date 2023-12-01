/*
112. Path Sum
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.

*/


// # solution of the problem in c++

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        //base case
        if(root==NULL) return false;

       

        if(root->left==NULL && root->right==NULL){
            return (targetSum-root->val)==0;
        }

       

        bool left=hasPathSum(root->left,targetSum-root->val);
        bool right=hasPathSum(root->right,targetSum-root->val);

        return left || right;
    }
};