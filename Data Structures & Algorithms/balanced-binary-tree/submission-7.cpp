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
    int nums=0;
public:
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        if(left-right>1 || right-left>1) nums++;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        nums=0;
        depth(root);

        if(nums==0) return 1;
        else return 0;
    }
};
