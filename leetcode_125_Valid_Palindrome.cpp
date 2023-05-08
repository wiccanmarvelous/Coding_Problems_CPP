#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                temp += (s[i] + 32);
            else if (s[i] >= 'a' && s[i] <= 'z')
                temp += s[i];
            else if (s[i] >= 48 && s[i] <= 57)
                temp += s[i];
        }
        int l = temp.length();
        string t = temp;
        reverse(begin(t), end(t));
        if (t == temp)
            return true;
        return false;
    }
};

// class Solution
// {
// public:
//     bool isPalindrome(string s)
//     {
//         string S = "";
//         int n = s.size(), N = S.size();
//         for (auto it : s)
//         {
//             if (it >= 65 && it <= 90)
//                 S += ('a' + (it - 'A'));
//             else if (it >= 97 && it <= 122)
//                 S += it;
//             else if (it >= 48 && it <= 57)
//                 S += it;
//         }
//         s = S;
//         reverse(s.begin(), s.end());
//         if (s != S)
//             return false;
//         return true;
//     }
// };

// class Solution
// {
// public:
//     bool isPalindrome(string s)
//     {
//         string temp = "";
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] >= 'A' && s[i] <= 'Z')
//                 temp += ('a' + (s[i] - 'A'));
//             else if (s[i] >= 'a' && s[i] <= 'z')
//                 temp += s[i];
//             else if (s[i] >= 48 && s[i] <= 57)
//                 temp += s[i];
//         }
//         int l = temp.length();
//         string t = temp;
//         reverse(begin(t), end(t));
//         if (t == temp)
//             return true;
//         return false;
//     }
// };

