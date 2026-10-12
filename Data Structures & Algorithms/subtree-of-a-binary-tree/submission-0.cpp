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
    bool sameTree(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return 1;
        if(p==NULL ||q==NULL) return 0;
        if(p->val==q->val){
            if(sameTree(p->left,q->left)==1 && sameTree(p->right,q->right)==1) return 1;
            else return 0;
        }
        else return 0;
    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(subroot==NULL) return 1;
        if(subroot!=NULL && root==NULL) return 0;
        if(sameTree(root,subroot)==1) return 1;

        if(isSubtree(root->left,subroot)==1 || isSubtree(root->right,subroot)==1) return 1;
        else return 0;
    }
};
