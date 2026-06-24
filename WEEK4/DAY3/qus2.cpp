///Leetcode problem- validate-binary-search-tree
//https://leetcode.com/problems/validate-binary-search-tree/description/
class Solution {
    private:
    bool solve(TreeNode* root,long long  maxi,long long  mini){
        if(root==NULL) return true;
        if(root->val>mini && root->val<maxi){
           bool lefty= solve(root->left,root->val,mini);
           bool righty= solve(root->right,maxi,root->val);
           return lefty && righty;
        }
        else return false;

    }
public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        long long maxi = LLONG_MAX;
long long mini = LLONG_MIN;
       return solve(root,maxi,mini);
    }
};