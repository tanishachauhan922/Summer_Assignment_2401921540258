//Leetcode problem- generate-parentheses
//https://leetcode.com/problems/generate-parentheses/
class Solution {
    void solve(int n, vector<string>& ans,int i,int o,int c,string curr){
            //base case
            if(i==2*n && o==c){
                ans.push_back(curr);
                return;
            }
           if(c>o) return;
           if(o<n)
           solve(n,ans,i+1,o+1,c,curr+"(");
           if(c<o)
           solve(n,ans,i+1,o,c+1,curr+")");
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int i=0;
        int o=0,c=0;
        string curr="";
        solve(n,ans,i,o,c,curr);
        return ans;
    }
};