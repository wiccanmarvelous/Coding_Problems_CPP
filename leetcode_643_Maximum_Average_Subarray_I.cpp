#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0, mSum;
        for (int i = 0; i < k; i++)
            sum += nums[i];
        mSum = sum;
        int i = k, j = 0, n= nums.size();
        while (i < n)
        {
            mSum = max(mSum, sum);
            sum += nums[i];
            sum -= nums[j];
            i++, j++;
        }
        mSum = max(mSum, sum);
        return mSum / k;
    }
};