#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int n = s.size();
        for (int i = 0; i < n / 2; i++)
        {
            swap(s[i], s[n - 1 - i]);
        }
    }
};

// class Solution {
// public:
//     void reverseString(vector<char>& s) {

//         for (int i = 0; i < s.size()/2; i++){
//             swap(s[i], s[s.size() - 1 - i]);
//         }
//     }
// };

// using recursion
// class Solution {
// public:
//     void helper(vector<char>& s, int i, int j) {
//         if (i >= j)
//             return;
//         swap(s[i], s[j]);
//         helper(s, i + 1, j - 1);
//     }
//     void reverseString(vector<char>& s) {
//         helper(s, 0, s.size() - 1);
//     }
// };
