// https://codeforces.com/problemset/problem/1722/D
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long initial = 0;
        vector<long long> gains;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'L')
            {
                initial += i;
                gains.push_back((n - i - 1) - i);
            }
            else
            {
                initial += (n - i - 1);
                gains.push_back(i - (n - i - 1));
            }
        }

        sort(gains.rbegin(), gains.rend());

        vector<long long> result(n);
        long long total = initial;
        for (int k = 0; k < n; ++k)
        {
            if (gains[k] > 0)
            {
                total += gains[k];
            }
            result[k] = total;
        }

        for (long long val : result)
        {
            cout << val << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
