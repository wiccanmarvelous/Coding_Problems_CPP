#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    list<int> queue;
    int q, i, data;
    cin >> q;
    while (q--) {
        cin >> i;
        if (i == 1) {
            cin >> data;
            queue.push_back(data);
        }
        else if (i == 2)
            queue.pop_front();
        else if (i == 3)
            cout << queue.front() << endl;
    }
    return 0;
}
