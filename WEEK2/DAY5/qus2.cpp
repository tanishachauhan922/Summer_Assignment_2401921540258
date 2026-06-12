//Leetcode problem- string-compression
//https://leetcode.com/problems/string-compression/
class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
       char ch=chars[0];
       int len=1;
       int j=0;
       int i=1;
       for(i=1;i<n;i++){
          if(ch==chars[i]){
            len++;
          }
          else{
            if(len>1){
             chars[j]=ch;
             j++;
             string cnt=to_string(len);
             for(char ch: cnt){
             chars[j]=ch;
             j++;
            }
            }
            else{
                chars[j]=ch;
                j++;
            }
            ch=chars[i];
           len=1;
          }
       }
        if(len>1){
             chars[j]=ch;
             j++;
            string cnt=to_string(len);
             for(char ch: cnt){
             chars[j]=ch;
             j++;
            }
            }
            else{
                chars[j]=ch;
                j++;
            }
       return j;
    }
};