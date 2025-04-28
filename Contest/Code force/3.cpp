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
        long long k;
        cin >> n >> k;
        vector<long long> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        long long x = -1;
        bool valid = true;

        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                if (x == -1)
                    x = a[i] + b[i];
                else if (a[i] + b[i] != x)
                {
                    valid = false;
                    break;
                }
            }
        }

        if (!valid)
        {
            cout << 0 << '\n';
            continue;
        }

        if (x == -1)
        {
            long long min_x = 0, max_x = LLONG_MAX;
            for (int i = 0; i < n; i++)
            {
                min_x = max(min_x, a[i]);
                max_x = min(max_x, a[i] + k);
            }
            cout << max(0LL, max_x - min_x + 1) << '\n';
        }
        else
        {
            bool is_ok = true;
            for (int i = 0; i < n; i++)
            {
                if (b[i] == -1)
                {
                    long long bi = x - a[i];
                    if (bi < 0 || bi > k)
                    {
                        is_ok = false;
                        break;
                    }
                }
            }
            cout << (is_ok ? 1 : 0) << '\n';
        }
    }
    return 0;
}
