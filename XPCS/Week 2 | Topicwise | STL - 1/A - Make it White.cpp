// https://codeforces.com/problemset/problem/1927/A

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
        int l, i_c, e_c;
        cin >> l;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                i_c = i;
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                e_c = i;
                break;
            }
        }
        // cout << i_c << " " << e_c << endl;
        cout << abs(i_c - e_c) + 1 << endl;
    }

    return 0;
}