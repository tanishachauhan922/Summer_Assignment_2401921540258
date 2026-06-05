
//// LeetCode 643 - Maximum Average Subarray-1

// https://leetcode.com/problems/contains-duplicate/submissions/2020449889/

#include <iostream>

using namespace std;

class Solution
{

public:
    double findMaxAverage(vector<int> &nums, int k)
    {

        int n = nums.size();

        double curr = nums[0];

        if (n < k)
            return 0.00000;

        // use sliding window

        double sum = 0.0;

        for (int i = 0; i < k; i++)
        {

            sum += nums[i];
        }

        double ans = sum / (double)k;

        for (int i = k; i < n; i++)
        {

            sum += nums[i];

            sum -= nums[i - k];

            ans = max(ans, sum / (double)k);
        }

        return ans;
    }
};