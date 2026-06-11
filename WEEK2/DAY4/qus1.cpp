//leetcode problem -reverse-words-in-a-string-iii
//https://leetcode.com/problems/reverse-words-in-a-string-iii/
class Solution {
    void reverse(string & temp){
        int s=0,e=temp.size()-1;
        while(s<e){
            swap(temp[s],temp[e]);
            s++;
            e--;
        }
    }
public:
    string reverseWords(string s) {
        string ans="";
        int n=s.size();
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]==' ') {
              reverse(temp);
              ans+=temp;
              ans+=' ';
              temp="";
            }
            else if(i==n-1){
                temp+=s[i];
                reverse(temp);
                ans+=temp;
            }
            else  temp+=s[i];
        }
        return ans;
    }
};