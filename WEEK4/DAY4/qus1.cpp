//Leetcode problem - path-sum
//https://leetcode.com/problems/path-sum/description/
class Solution {
public:
void solve(TreeNode* root, int targetSum,int currsum,bool & ans){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        currsum+=root->val;
        if(currsum==targetSum){
            ans=true;
            return ;
        }else{
        currsum+=0;
        return ;
        }
    }
    currsum+=root->val;
    solve(root->left,targetSum,currsum,ans);
    solve(root->right,targetSum,currsum,ans);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        bool ans=false;
        int currsum=0;
        solve(root,targetSum,currsum,ans);
        return ans;
    }
};