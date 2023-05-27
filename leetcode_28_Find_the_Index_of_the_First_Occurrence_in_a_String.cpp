#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size(), j = 0, ans = -1;
        for (int i = 0; i < n; i++) {
            if (haystack[i] == needle[j])
            {
                if (j == 0)
                    ans = i;
                j++;
            }
            else
            {
                i = i - j;
                j = 0;
            }
            if (j == m)
                return ans;
        }
        return -1;
    }
};