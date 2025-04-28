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
        int n, x;
        cin >> n >> x;
        vector<int> res;

        for (int i = 0; i < x; ++i)
        {
            res.push_back(i);
        }
        for (int i = n - 1; i > x; --i)
        {
            res.push_back(i);
        }

        if (x < n)
            res.push_back(x);

        for (int i = x + 1; i < n; ++i)
        {
            res.push_back(i);
        }

        while (res.size() < n)
        {
            for (int i = x + 1; i < n && res.size() < n; ++i)
            {
                if (find(res.begin(), res.end(), i) == res.end())
                {
                    res.push_back(i);
                }
            }
        }

        for (int i = 0; i < res.size(); ++i)
        {
            cout << res[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
