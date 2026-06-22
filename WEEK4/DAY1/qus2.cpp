//Leetcode Probelm - invert-binary-tree
//https://leetcode.com/problems/invert-binary-tree/
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
    void  solve(TreeNode* & root){
        queue<TreeNode*>q;
        TreeNode* head=root;
        q.push(root);
        while(q.size()>0){
            TreeNode* top=q.front();
            q.pop();
            swap(top->left,top->right);
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
      solve(root);
      return root;
    }
};