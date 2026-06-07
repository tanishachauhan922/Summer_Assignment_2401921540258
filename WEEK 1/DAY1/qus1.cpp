// LeetCode -Two sum
// https://leetcode.com/problems/two-sum/submissions/2024281479/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int val=target-nums[i];
            if(mp.find(val)!=mp.end() && mp[val] !=i){
                 ans.push_back(i);
                ans.push_back(mp[val]);
                break;
            }
        }
        return ans;
    }
};