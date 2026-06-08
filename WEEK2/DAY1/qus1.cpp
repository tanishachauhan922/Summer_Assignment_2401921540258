//Leetcode problem-valid-anagram
//https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int ssize=s.size();
        int tsize=t.size();
        if(ssize!=tsize) return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int i=0,j=0;
        while(i<ssize || j<tsize){
            mp1[s[i]]++; 
            i++;
            mp2[t[j]]++;
            j++;
        }
        for(int i=0;i<ssize;i++){
            char ch=s[i];
            if(mp1[ch]!=mp2[ch]) return false;
        }
        return true;
    }
};  // this will take time complexity=0(n) and space complexity=0(n)

//OPTIMAL SOLUTION
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(26,0);
        for( char ch : s) freq[ch-'a']++; 
        for( char ch : t) freq[ch-'a']--;
        for(int i=0;i<freq.size();i++){
            if(freq[i]!=0) return false;
        } 
        return true;
    }
};