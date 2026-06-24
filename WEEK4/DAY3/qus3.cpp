///Leetcode problem- lowest-common-ancestor-of-a-binary-search-tree
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/
class Solution {
public:
TreeNode* find(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root==NULL ) return NULL;
    if(root==p || root==q) return root;
    if(p->val<root->val && q->val<root->val){
        return find(root->left,p,q);
    }
    else if(p->val>root->val && q->val>root->val){
        return find(root->right,p,q);
    }
     return root;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         
        return find(root,p,q);
    }
};