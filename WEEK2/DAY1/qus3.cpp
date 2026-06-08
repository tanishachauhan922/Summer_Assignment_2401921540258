//Leetcode problem - ransom-note
https://leetcode.com/problems/ransom-note/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq(26,0);
        for(char ch : magazine) freq[ch-'a']++;
        for(char ch : ransomNote)freq[ch-'a']--;
        for(int i=0;i<freq.size();i++){
            if(freq[i]<0) return false;
        }
        return true;
    }
};