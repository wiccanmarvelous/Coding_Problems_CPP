#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long int s = 0, e = num;
        while (s <= e)
        {
            long int mid = (s + e) / 2;
            if ((mid * mid) < num)
                s = mid + 1;

            else if ((mid * mid) > num)
                e = mid - 1;

            else
                return true;
        }
        return false;
    }
};

int main()
{
    int num = 16;
    Solution obj;
    if (obj.isPerfectSquare(num))
        cout << "true";
    else
        cout << "false";
    return 0;
}