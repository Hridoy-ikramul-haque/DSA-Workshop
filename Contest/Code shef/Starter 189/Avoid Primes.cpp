#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    if (n == 2)
    {
        p = {1, 2};
    }
    else if (n == 3)
    {
        p = {2, 1, 3};
    }
    else if (n == 5)
    {
        p = {3, 1, 4, 5, 2};
    }
    else
    {
        iota(p.begin(), p.end(), 1);
        for (int i = 1; i < n; i += 2)
        {
            if (i + 1 < n)
            {
                swap(p[i], p[i + 1]);
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << p[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}