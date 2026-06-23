//Leetcode problem - binary-tree-zigzag-level-order-traversal
//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>>ans;
      vector<int>output;
      queue<TreeNode*>q;
      if(root==NULL) return ans;
      q.push(root);
        q.push(NULL);
        bool flag=false;
        while(!q.empty()){
          TreeNode* top=q.front();  
          q.pop();
          if(top==NULL){
          ans.push_back(output);
           output.clear();
           if(q.size()>0) q.push(NULL);
          }
          else{
                output.push_back(top->val);
            if(top->left) q.push(top->left);
            if(top->right) q.push(top->right);
            
            }
          }
          for(int i=1;i<ans.size();i++){
            if(flag==false){
               int n=ans[i].size();
               reverse(ans[i].begin(),ans[i].end());
            }
            flag=!flag;
          }
        return ans;
       
    }
};