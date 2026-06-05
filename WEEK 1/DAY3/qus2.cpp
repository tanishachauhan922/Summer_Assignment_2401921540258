
// LeetCode 217 - Contains Duplicate

// https://leetcode.com/problems/contains-duplicate/submissions/2020449889/

#include <iostream>

using namespace std;

class Solution
{

public:
    vector<int> sortedSquares(vector<int> &nums)
    {

        int n = nums.size();

        vector<int> ans(n, 0);

        int i = 0;
        ;

        int j = n - 1;

        int k = n - 1;

        while (i <= j)
        {

            if (nums[i] * nums[i] > nums[j] * nums[j])
            {

                ans[k] = nums[i] * nums[i];

                i++;

                k--;
            }

            else
            {

                ans[k] = nums[j] * nums[j];

                k--;

                j--;
            }
        }

        return ans;
    }
};
