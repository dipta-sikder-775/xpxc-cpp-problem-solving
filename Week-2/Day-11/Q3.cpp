/*
https://codeforces.com/contest/1692/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, dup = 0;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
        }

        for (auto it : mp)
            dup += it.second - 1;

        if (dup % 2 == 1)
            dup++;

        cout << n - dup << "\n";
    }
}
