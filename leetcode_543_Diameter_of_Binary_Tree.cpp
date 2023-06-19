#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int m = 0;
    int bt(TreeNode* root) {
        if (root == NULL)
            return 0;
        int l = bt(root->left);
        int r = bt(root->right);
        m = max(m , (l + r));
        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        bt(root);
        return m;
    }
};