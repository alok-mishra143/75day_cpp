/*

Brothers From Different Roots-GFG


Given two BSTs containing N1 and N2 distinct nodes respectively and given a value x, your task is to complete the function countPairs(), that returns the count of all pairs of (a, b), where a belongs to one BST and b belongs to another BST, such that a + b = x.

Input:
BST1:
       5
     /   \
    3     7
   / \   / \
  2   4 6   8

  BST2:
       10
     /    \
    6      15
   / \    /  \
  3   8  11   18

  x = 16
Output:
3
Explanation:
The pairs are: (5, 11), (6, 10) and (8, 8)



*/

//# solution 


class Solution {
public:
    void inorder(Node* root, vector<int>& m1) {
        if (root == NULL)
            return;

        inorder(root->left, m1);
        m1.push_back(root->data);
        inorder(root->right, m1);
    }

    void search(Node* root, int target, int& cnt) {
        if (root == NULL)
            return;
        if (root->data == target)
            cnt++;
        if (root->data > target)
            search(root->left, target, cnt);
        else if (root->data < target)
            search(root->right, target, cnt);
    }

    int countPairs(Node* root1, Node* root2, int x) {
        int cnt = 0;

        if (!root1 || !root2)
            return -1;

        vector<int> r1, r2;

        inorder(root1, r1);
        inorder(root2, r2);

        unordered_set<int> uniqueValues;

        for (int i : r1) {
            uniqueValues.insert(i);
        }

        for (int i : r2) {
            int tar = x - i;
            if (uniqueValues.count(tar) > 0) {
                cnt++;
            }
        }

        return cnt;
    }
};
