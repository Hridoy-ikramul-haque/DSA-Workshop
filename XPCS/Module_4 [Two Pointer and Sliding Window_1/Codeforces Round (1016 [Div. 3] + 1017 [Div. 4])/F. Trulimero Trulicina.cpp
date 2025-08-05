// https://codeforces.com/contest/2094/problem/F
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
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> grid(n, vector<int>(m));
        int val = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                grid[i][j] = val;
                val++;
                if (val > k)
                {
                    val = 1;
                }
            }
        }
        if (m % k == 0)
        {
            int nxt = 0;
            for (int i = 0; i < n; i++)
            {
                rotate(grid[i].begin(), grid[i].begin() + nxt, grid[i].end());
                nxt++;
                if (nxt == m)
                {
                    nxt = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
