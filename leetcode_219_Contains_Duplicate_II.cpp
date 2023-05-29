#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> dict;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (dict.find(nums[i]) == dict.end())
                dict[nums[i]] = i;
            else
            {
                if (i - dict[nums[i]] <= k)
                    return true;
                else
                    dict[nums[i]] = i;
            }
        }
        return false;
    }
};