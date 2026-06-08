//Leetcode problem-first-unique character in a string
//https://leetcode.com/problems/first-unique-character-in-a-string/
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>count;
        queue<int>q;
        int n=s.size();
        for(int i=0;i<n;i++){
            char ch=s[i];
            count[ch]++;
            q.push(i);
        }
        while(!q.empty()){
           int top=s[q.front()];
           if(count[top]==1){
            return  q.front();
           }
           else{
            q.pop();
           }
        }
          return -1;
    }
};