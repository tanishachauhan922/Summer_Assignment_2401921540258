
// Leetcode problem -reverse-string

// https://leetcode.com/problems/reverse-string/

#include <iostream>

using namespace std;

class Solution
{

public:
    void reverseString(vector<char> &s)
    {

        int n = s.size();

        int i = 0, j = n - 1;

        while (i < j)
        {

            swap(s[i], s[j]);

            i++;

            j--;
        }
    }
};
