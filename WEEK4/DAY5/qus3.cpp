//Leetcode problem - serialize-and-deserialize-binary-tree
//https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans="";
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
        TreeNode* node=q.front();
        q.pop();
        if(node){
         q.push(node->left);
         q.push(node->right);
        ans+=to_string(node->val);
        ans+=',';
        }
        else ans+="N,";
        }
        return ans;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
     vector<string>vec;
     string temp="";
     for( char ch: data)
     {
        if(ch==','){ vec.push_back(temp);
        temp="";
        }
        else{
            temp+=ch;
        }
     }
      queue<TreeNode*>q;
      int i=0;
      if(vec[0] == "N")
    return NULL;
       TreeNode* root= new TreeNode(stoi(vec[i]));
       q.push(root);
      i=1;
        while(!q.empty() && i<vec.size()){
        TreeNode* node= q.front();
        q.pop();
        if(vec[i]!="N"){
        node->left=new TreeNode(stoi(vec[i]));
        q.push(node->left);
        }
         i++;
        if(i<vec.size() && vec[i]!="N"){
        node->right=new TreeNode(stoi(vec[i]));
        q.push(node->right);
        }
         i++;
    } 
    return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));