#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size(), a, count = 0;
        string s = "";
        if (details.size() == 0)
            return 0;
        for (int i = 0; i < n; i++) {
            s += details[i][11];
            s += details[i][12];
            a = stoi(s);
            if (a > 60)
                count++;
            s = "";
        }
        return count;
    }
};

int main()
{
    vector<string> v{"1234567890M6788", "123456789(F8780"};
    Solution obj;
    cout << "Number of senior citizens: " << obj.countSeniors(v) << endl;
    return 0;
}