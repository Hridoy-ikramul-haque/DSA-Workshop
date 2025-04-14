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

        // If m == n, return the full range [l, r]
        if (m == n)
        {
            cout << l << " " << r << endl;
        }
        else if (n == r)
        {

            int len = m + 1;
            int left = l;
            int right = left + len - 1;
            cout << left << " " << right << endl;
        }
        else
        {
            int len = m + 1;
            int mid = (l + r) / 2;
            int left = mid - (len / 2);
            int right = left + len - 1;

            if (left < l)
            {
                left = l;
                right = left + len - 1;
            }

            if (right > r)
            {
                right = r;
                left = right - len + 1;
            }

            cout << left << " " << right << endl;
        }
    }

    return 0;
}
