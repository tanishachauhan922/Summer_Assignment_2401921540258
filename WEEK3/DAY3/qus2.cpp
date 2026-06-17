//Leetcode problem - min-stack
//https://leetcode.com/problems/min-stack/description/
class MinStack {
public:
    MinStack() {
        
    }
   stack<pair<int,int>>mini;
    void push(int val) {
        //agr stack khali h ya phir top elemnt already bada h
        if(mini.empty() ){
            mini.push({val,val});
        }
        else{
          if(mini.top().second>val){
            mini.push({val,val});
          } 
          else mini.push({val,mini.top().second}); 
        }
    }
    
    void pop() {
        if(!mini.empty()) mini.pop();
            }
    
    int top() {
        if(!mini.empty()) return mini.top().first;
        return -1;
    }
    
    int getMin() {
        if(!mini.empty()) return mini.top().second;
        return -1;
    }
};