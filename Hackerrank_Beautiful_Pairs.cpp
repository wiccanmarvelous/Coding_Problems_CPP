#include <bits/stdc++.h>
using namespace std;
#define sort(x) sort(x.begin(), x.end())
#define print(x)           \
    for (auto it : x)      \
        cout << it << ' '; \
    cout << endl;

int main()
{
    vector<int> A{3, 5, 7, 11, 5, 8}, B{5, 7, 11, 10, 5, 8};
    vector<pair<int, int>> p;
    int i = 0, j = 0, sizeAB = A.size(), flag = 0;
    sort(A);
    sort(B);
    while (i < sizeAB && j < sizeAB)
    {
        if (A[i] == B[j])
        {
            p.push_back({i, j});
            i++, j++;
        }
        else if (A[i] < B[j])
        {
            flag++;
            i++;
        }
        else
        {
            flag++;
            j++;
        }
    }
    for (auto it : p)
        cout << it.first << ' ' << it.second << endl;

    if (flag)
    {
        cout << p.size() + 1;
    }
    else
    {
        cout << p.size() - 1;
    }
}