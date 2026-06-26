//Leetcode problem - symmetric-tree
//https://leetcode.com/problems/symmetric-tree/description/
class Solution {
    bool solve(TreeNode* r1,TreeNode* r2){
        if(r1==NULL && r2==NULL) return true;
        if((r1==NULL && r2!=NULL) ||(r2==NULL && r1!=NULL)) return false;
         if(r1->val!=r2->val) return false;
         bool t1=solve(r1->left,r2->right);
         bool t2=solve(r1->right,r2->left);
         if(t1==true && t2==true) return true;
         else return false;

    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
         return    solve(root->left,root->right);
    
    }
};
