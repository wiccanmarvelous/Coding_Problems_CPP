#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char i) {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
            return true;
        return false;
    }

    string reverseVowels(string s) {
        vector<char> vec;

        for (auto it : s)
            vec.push_back(it);
        int i = 0, j = vec.size()- 1, l, m;
        while (i <= j)
        {
            if (isVowel(vec[i]) && isVowel(vec[j]))
            {
                swap(vec[i], vec[j]);
                cout << s[i] << ' ' << s[j] << endl;
                i++, j--;
            }
            if (isVowel(vec[i]) == false)
                i++;
            if (isVowel(vec[j]) == false)
                j--;
            cout << i << ' ' << j << endl;
        }
        s = "";
        for (auto it : vec)
            s += it;
        return s;
    }
};

int main()
{
    string s = "hello";
    Solution obj;
    cout << obj.reverseVowels(s);
}