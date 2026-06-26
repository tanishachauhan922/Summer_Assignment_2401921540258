//Leetcode problem - construct-binary-tree-from-preorder-and-inorder-traversal
//https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/
class Solution {
   TreeNode* solve(vector<int>& preorder, vector<int>& inorder ,unordered_map<int,int>& mp,
   int& i,int instart,int inend){
        if(i>=preorder.size()) return NULL;
        if(instart>inend)return NULL;
        int rootval=preorder[i];
        TreeNode* root=new TreeNode(preorder[i++]);
         int indx=mp[rootval];
        root->left= solve(preorder,inorder,mp,i,instart,indx-1);
        root->right=solve(preorder,inorder,mp,i,indx+1,inend);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()!=inorder.size()) return NULL;
        unordered_map<int,int>mp;
        int n=inorder.size();
        for(int i=0;i <inorder.size();i++) mp[inorder[i]]=i;
        int instart=0,inend=n-1;
        int i=0;
        return solve(preorder,inorder,mp,i,instart,inend);
    }
};