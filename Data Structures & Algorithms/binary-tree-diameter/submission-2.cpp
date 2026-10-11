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
private:
    int maxi=0;
public:
    int depth(TreeNode* root)
    {
        if(root==NULL) return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        maxi= max(maxi,left+right);
        return max(left,right)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);// to make depth start running
        return maxi;
    }
};
