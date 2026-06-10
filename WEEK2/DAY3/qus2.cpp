//leetcode problem- is-subsequence
//https://leetcode.com/problems/is-subsequence/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ssize=s.size();
        int tsize=t.size();
        int j=ssize-1;
        int i=tsize-1;
        while(i>=0 && j>=0){
            if(s[j]==t[i]){
                j--;
                i--;
            }
            else i--;
        }
        if(j==-1) return true;
        return false;
    }
};