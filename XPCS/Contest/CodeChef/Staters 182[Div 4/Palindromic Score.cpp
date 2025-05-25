// https://www.codechef.com/problems/LPSS
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
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, max(b, c));
        int lower = min({a, b, c});
        int mid = (a + b + c) - (mx + lower);
        int remaining = (a + b + c) - mx;

        // cout << remaining << endl;
        // cout << mx << " " << mid << " " << lower << endl;
        if (lower % 2 != 0 && mid % 2 != 0)
        {
            cout << (mid + lower) - 1 << endl;
        }
        else
        {
            cout << (mid + lower) << endl;
        }
    }

    return 0;
}