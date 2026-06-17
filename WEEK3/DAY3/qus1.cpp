//Leetcode problem- valid-parentheses
https://leetcode.com/problems/valid-parentheses/description/
class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       for(int i=0;i<s.size();i++){
          if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
          }
          else{
            if(st.size()!=0){
            char ch=st.top();
            if(s[i]==')' && ch=='(')  st.pop();
            else if(s[i]=='}' && ch=='{')   st.pop();
            
            else if(s[i]==']' && ch=='[') st.pop();
            else return false;
          }
          else return false;
          }
       }
       if(st.empty()) return true;
        else return false;
    }
};