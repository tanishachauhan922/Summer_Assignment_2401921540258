// Leetcode problem -Valid Palindrome

// https://leetcode.com/problems/valid-palindrome/

#include <iostream>

using namespace std;

class Solution
{

public:
    bool isPalindrome(string s)
    {

        int n = s.size();

        string dupli = "";

        for (int i = 0; i < n; i++)
        {

            if (s[i] >= 'a' && s[i] <= 'z')
                dupli += s[i];

            else if (s[i] >= 'A' && s[i] <= 'Z')
            {

                char val = s[i] + 32;

                dupli += val;
            }
            else if (isalnum(s[i]))
                dupli += s[i];
        }

        n = dupli.size();

        int i = 0, j = n - 1;

        string rev = "";

        for (int j = n - 1; j >= 0; j--)
        {

            rev += dupli[j];
        }

        if (rev == dupli)
            return true;

        return false;
    }
};