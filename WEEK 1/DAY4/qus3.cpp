//Leetcode problem - spiral-matrix
//https://leetcode.com/problems/spiral-matrix/submissions/2025355013/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int m=matrix.size();
            int n=matrix[0].size();
            vector<int>ans;
            int top =0,bottom=m-1;
            int left=0,right=n-1;
            string direc="right";
            while(top<=bottom && left<=right){
                   if(direc=="right"){
                     for(int i=left;i<=right;i++) ans.push_back(matrix[top][i]);
                     top++;
                     direc="down";
                   }
                   else if(direc=="down"){
                      for(int i=top;i<=bottom;i++) ans.push_back(matrix[i][right]);
                     right--;
                     direc="left";
                   }
                   else if(direc=="left"){
                      for(int i=right;i>=left;i--) ans.push_back(matrix[bottom][i]);
                     bottom--;
                     direc="up";
                   }
                   else{
                     for(int i=bottom;i>=top;i--) ans.push_back(matrix[i][left]);
                     left++;
                    direc="right";
                   }
            }
            return ans;
            }
};