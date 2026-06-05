// LeetCode 53 - Maximum Subarray

// https://leetcode.com/problems/maximum-subarray/

#include <iostream>

using namespace std;

class Solution
{

public:
    int maxSubArray(vector<int> &nums)
    {

        int n = nums.size();

        if (n == 0)
            return 0;

        int currsum = nums[0];

        int ans = nums[0];

        for (int i = 1; i < n; i++)
        {

            currsum = max(nums[i], currsum + nums[i]);

            ans = max(ans, currsum);

            if (currsum < 0)
            {

                // if sum is less than 0 then there is no benefit of adding it further so make it 0

                currsum = 0;
            }
        }

        return ans;
    }
};