// Leetcode problem - longest-common-prefix

// https://leetcode.com/problems/longest-common-prefix/

#include <iostream>

using namespace std;

class Solution
{

public:
    string longestCommonPrefix(vector<string> &strs)
    {

        string ans = "";

        int n = strs.size();

        if (n == 0)
            return ans;

        ans = strs[0];

        for (int i = 1; i < n; i++)
        {

            string curr = "";

            int len = min(ans.size(), strs[i].size());

            for (int j = 0; j < len; j++)
            {

                if (ans[j] == strs[i][j])
                    curr += strs[i][j];

                else
                    break;
            }

            ans = curr;
        }

        return ans;
    }
};