#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        sort(answers.begin(),answers.end());
        int ans = 0, count = 1, n = answers.size();
        for (int i = 1; i < n; i++) {
            if (answers[i - 1] == answers[i])
                count++;
            else {
                ans +=  answers[i - 1] + 1;
                count = 1;
            }
            if (count > answers[i - 1] + 1) {
                ans += answers[i - 1] + 1;
                count = 1;
            }
        }
        ans +=  answers[n - 1] + 1;
        return ans;
    }
};