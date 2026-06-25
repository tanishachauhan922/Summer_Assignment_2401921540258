//Leetcode problem - binary-tree-maximum-path-sum
//https://leetcode.com/problems/binary-tree-maximum-path-sum/
class Solution {
    int solve(TreeNode* root,int & ans){
        if(root==NULL) return 0;
        int leftsum = max(0, solve(root->left, ans));
       int rightsum = max(0, solve(root->right, ans));
        ans=max(ans,root->val+leftsum+rightsum);
        return (root->val)+max(leftsum,rightsum);
    }
public:
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        if(root==NULL) return 0;
        solve(root,ans);
        return ans;
    }
};