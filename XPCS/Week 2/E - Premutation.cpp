// https://codeforces.com/problemset/problem/1790/C
//  #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n - 1));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
            }
        }

        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i][0]]++;
        }

        vector<int> result;

        int current = 0, max = 0;
        for (auto [p, q] : freq)
        {
            if (q > max)
            {
                max = q;
                current = p;
            }
        }
        result.push_back(current);
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] != current)
            {
                for (auto val : arr[i])
                {
                    result.push_back(val);
                }
                break;
            }
        }
        // cout << current;

        for (auto x : result)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// 3 1 4 2