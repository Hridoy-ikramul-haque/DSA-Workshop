// https://codeforces.com/contest/2094/problem/D
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        vector<pair<char, int>> v1, v2;
        int idx = 0;
        while (idx < s1.size())
        {
            char curr = s1[idx];
            int count = 0;

            while (s1[idx] == curr)
            {
                count++;
                idx++;
            }
            v1.push_back({curr, count});
            // count = 0;
        }
        idx = 0;
        while (idx < s2.size())
        {
            char curr = s2[idx];
            int count = 0;

            while (s2[idx] == curr)
            {
                count++;
                idx++;
            }
            v2.push_back({curr, count});
            // count = 0;
        }
        // for (auto x : v1)
        // {
        //     cout << x.first << " " << x.second;
        // }
        // cout << endl;

        int i = 0;
        bool flag = true;
        while (i < v1.size())
        {
            if (v1.size() != v2.size())
            {
                flag = false;
            }
            else if ((v1[i].first != v2[i].first) || ((v2[i].second < v1[i].second) || (v2[i].second > 2 * v1[i].second)))
            {
                flag = false;
            }
            i++;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
