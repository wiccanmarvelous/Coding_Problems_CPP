#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long e = 0, s = 0, sum = 0, maxSum = 0;
        while (e < N)
        {
            sum += Arr[e];
            if (e - s + 1 == K)
            {
                maxSum = max(maxSum, sum);
                sum -= Arr[s];
                s++;
            }
            e++;
        }
        return maxSum;
    }
};