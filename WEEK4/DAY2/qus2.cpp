//Leetcode problem - binary-tree-level-order-traversal
//https://leetcode.com/problems/binary-tree-level-order-traversal/description/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>ans;
       queue<TreeNode*>q;
       if(root==NULL) return ans;
        q.push(root);
        q.push(NULL);
         vector<int>output;
        while(!q.empty()){
                TreeNode* temp= q.front();
                q.pop();
                if(temp==NULL){
                   // q.pop();
                    ans.push_back(output);
                    output.clear();
                     if(q.size() > 0) {
                    q.push(NULL);  // अगले level का marker
                }

                }
                else{
                    output.push_back(temp->val);
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                }
            }
        
     return ans;
    }
};