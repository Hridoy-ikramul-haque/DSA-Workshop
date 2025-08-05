// https://codeforces.com/contest/2094/problem/C
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
        int n;
        cin >> n;
        vector<int> ans(2 * n + 1);
        // int grid[n + 1][n + 1];
        set<int> s; // always keeps unique value
        for (int i = 1; i <= 2 * n; i++)
        {
            s.insert(i);
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                // cin >> grid[i][j];
                int x;
                cin >> x;
                ans[i + j] = x;
                if (s.find(x) != s.end())
                {
                    s.erase(x);
                }
            }
        }
        ans[1] = *s.begin();
        for (int i = 1; i < 2 * n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 1 2 3
// 1 1 6 2 2 6 2 4 3 2 4 3

//     1 2 3 4 5 6 1 6 2 4 3