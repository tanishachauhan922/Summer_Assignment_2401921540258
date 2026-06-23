//Leetcode problem - binary-tree-inorder-traversal
//https://leetcode.com/problems/binary-tree-inorder-traversal/description/
class Solution {
    TreeNode* find(TreeNode* root,TreeNode* curr){
        while(root->right!=NULL && root->right!=curr){
            root=root->right;
        }
        return root;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //by morris traversal
        vector<int>ans;
        if(root==NULL) return ans;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                 TreeNode* pred=find(curr->left,curr);
                 //agr pheli bar visit kr rhe h to temporray path or thread banalo
                 if(pred->right==NULL){
                    pred->right=curr;
                    curr=curr->left;
                 }
                 else{
                    pred->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;
                 }
            }
            else{
               ans.push_back(curr->val);
               curr=curr->right;
            }
        }
        return ans;
    }
};