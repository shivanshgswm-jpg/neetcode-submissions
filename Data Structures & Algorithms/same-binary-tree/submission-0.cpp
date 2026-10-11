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
    vector<int> ans;
public:
    void preorder(TreeNode* root){
        if(root==NULL) 
        {
            ans.push_back(-101);
            return;
        }
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int m=ans.size();
        for(int i=0;i<m;i++)
        {
            ans.pop_back();
        }
        vector<int> ptree;
        vector<int> qtree;
        preorder(p);
        ptree=ans;
        int n=ans.size();
        for(int i=0;i<n;i++)
        {
            ans.pop_back();
        }
        preorder(q);
        qtree=ans;
        if(ptree==qtree) return 1;
        else
        return 0;
    }
};
