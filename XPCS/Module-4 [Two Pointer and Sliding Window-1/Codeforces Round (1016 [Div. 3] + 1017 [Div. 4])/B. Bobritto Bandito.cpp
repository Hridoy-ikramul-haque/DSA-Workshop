// https://codeforces.com/contest/2094/problem/B
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
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        for (int i = 1; i <= n - m; i++)
        {
            if (l < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout << l << " " << r << endl;
    }

    return 0;
}