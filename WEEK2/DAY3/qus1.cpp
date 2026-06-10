//find-the-index-of-the-first-occurrence-in-a-string
//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int st=0;
        int i=0,j=0;
        while(i<haystack.size() && j<needle.size()){
            if(needle[j]==haystack[i]){
                j++;
                i++;
            }
            else{
                j=0;
                st++;
                i=st;
            }

        }
        if(j==needle.size()) return st;
 return -1;
    }
};
