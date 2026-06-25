//Leetcode problem - diameter-of-binary-tree/description
//https://leetcode.com/problems/diameter-of-binary-tree/description/
class Solution {
    private:
  pair<bool,int>solve(TreeNode* root,int & maxi){
    if(root==NULL){
        pair<bool,int>p={true,0};
        return p;
    }
    pair<bool,int>lefty=solve(root->left,maxi);
    pair<bool,int>righty=solve(root->right,maxi);
    bool yes=lefty.first && righty.first;
    int len=max(lefty.second,righty.second)+1;
    int currdiam=lefty.second+righty.second ;
    maxi=max(maxi,currdiam);
   // pair<bool,int>currpair=make_pair(yes,len);
    return {yes,len};
    
  }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int maxi=INT_MIN;
        solve(root,maxi);
       return  maxi;
       
    }
};