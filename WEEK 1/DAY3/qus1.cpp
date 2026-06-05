// Leetcode problem -Move Zeroes

// https://leetcode.com/problems/move-zeroes/submissions/2021465740/

#include <iostream>

using namespace std;

class Solution
{

public:
    void moveZeroes(vector<int> &nums)
    {

        int count = 0;

        int n = nums.size();

        int j = 0;

        for (int i = 0; i < n; i++)
        {

            if (nums[i] == 0)
                count++;

            else
            {

                nums[j] = nums[i];

                j++;
            }
        }

        while (j < n)
        {

            nums[j++] = 0;
        }
    }
};