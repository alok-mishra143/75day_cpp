/*
606. Construct String from Binary Tree


Given the root of a binary tree, construct a string consisting of parenthesis and integers from a binary tree with the preorder traversal way, and return it.

Omit all the empty parenthesis pairs that do not affect the one-to-one mapping relationship between the string and the original binary tree.

 

*/

//#solution 


class Solution {
public:
    void preorder(TreeNode* root, string& ans) {
        if (root == nullptr) return;

        
        ans += to_string(root->val);

       
        if (root->left || root->right) {
            ans += '(';
            preorder(root->left, ans);
            ans += ')';
        }

       
        if (root->right) {
            ans += '(';
            preorder(root->right, ans);
            ans += ')';
        }
    }

    string tree2str(TreeNode* root) {
        if (root == nullptr) return "";

        string ans = "";
        preorder(root, ans);
        return ans;
    }
};
