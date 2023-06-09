/*
https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int> result;
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            while (!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                result.push_back(arr[dq.front()]);
        }

        return result;
    }
};

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
