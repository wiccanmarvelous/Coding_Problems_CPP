#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1, len = 1;
        vector<char> s;
        for (int i = 1; i < chars.size(); i++) 
        {
            if (chars[i - 1] == chars[i])
                count++;
            else 
            {
                s.push_back(chars[i - 1]);
                if (count != 1)
                {
                    string c = to_string(count);
                    for (int j = 0; j < c.length(); j++)
                        s.push_back(c[j]);
                }
                count = 1;
            }
        }
        s.push_back(chars[chars.size() - 1]);
        if (count != 1)
        {
            string c = to_string(count);
            for (int j = 0; j < c.length(); j++)
                s.push_back(c[j]);
        }
        chars = s;
        return chars.size();
    }
};