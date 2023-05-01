#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size() / 2;
//         map<int, int> dict;
//         for (auto it : nums)
//         {
//             if (dict.find(it) == dict.end())
//                 dict[it] = 1;
//             else
//                 dict[it] += 1;
//             if (dict[it] > n)
//                 return it;
//         }
//         return 0;
//     }
// };


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<int>::iterator i;
//         int big_max = 0, count = 0, j = nums[0], ans = nums[0];
//         for (i = nums.begin(); i < nums.end(); i++)
//         {
//             if ((*i) != j)
//             {
//                 if (big_max < count)
//                 {
//                     ans = (*(i - 1));
//                     big_max = count;
//                 }
//                 count = 0;
//             }
//             count += 1;
//             j = (*i);
//         }
//         if (big_max < count)
//         {
//             ans = (*(i - 1));
//             big_max = count;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), count = 0, val = -1;
        for (int i = 0; i < n; i++) {
            if (count == 0)
                val = nums[i];
            if (nums[i] == val)
                count++;
            else
                count--;
        }
        return val;
    }
};

int main()
{
    int n, a;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter values in array: " << endl;
    while (n--)
    {
        cin >> a;
        arr.push_back(a);
    }
    Solution obj;
    cout << "The majority element is: " << obj.majorityElement(arr) << endl;
}