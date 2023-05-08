#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n; i++) 
//         {
//             if (nums[i] < 0)
//                 nums[i] = -nums[i];
//             nums[i] *= nums[i];
//         }
//         sort(begin(nums), end(nums));
//         return nums;
//     }
// };

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        int i = 0, j = n - 1, k = n - 1;
        while (i <= j)
        {
            if (abs(nums[i]) > abs(nums[j]))
                arr[k--] = (pow(nums[i++], 2));
            else
                arr[k--] = (pow(nums[j--], 2));
        }
        return arr;
    }
};

int main()
{
    vector<int> nums{-4, -1, 0, 3, 10}, arr;
    Solution obj;
    cout << "Square of a sorted array:" << endl;
    arr = obj.sortedSquares(nums);
    for (auto it : arr)
        cout << it << ' ';
    cout << endl;
    return 0;
}