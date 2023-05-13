#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int matrixSum(vector<vector<int>> &nums)
    {
        int r = nums.size(), c = nums[0].size(), Max = 0, count = 0, ans = 0;
        for (int i = 0; i < r; i++)
            sort(nums[i].begin(), nums[i].end());
        while (count < c)
        {
            for (int i = 0; i < r; i++)
            {
                if (nums[i].back() > Max)
                    Max = nums[i].back();
                nums[i].pop_back();
            }
            ans += Max;
            Max = 0;
            count++;
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> v{{7, 2, 1}, {6, 4, 2}, {6, 5, 3}, {3, 2, 1}};
    Solution obj;
    cout << obj.matrixSum(v) << endl;
    return 0;
}