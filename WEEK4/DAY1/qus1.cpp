//Leetcode problem- maximum-depth-of-binary-tree
//https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
 void solve(TreeNode* root,int & ans,int currmax){
      if(root==NULL) {
        ans=max(ans,currmax);
        return;
      }
      solve(root->left,ans,currmax+1);
      solve(root->right,ans,currmax+1);
 }
public:
    int maxDepth(TreeNode* root) {
        //base case
        if(root==NULL)
        return 0;
       int ans=0;
       int currmax=0;
       solve(root,ans,currmax);
       return ans;
    }
};