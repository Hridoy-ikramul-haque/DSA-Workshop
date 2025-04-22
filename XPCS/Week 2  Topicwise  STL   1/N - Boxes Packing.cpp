// https://codeforces.com/problemset/problem/903/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 4 4 3 2
    // 3 2 1
    int t, max_c = 0;
    cin >> t;
    map<int, int> mp;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto it : mp)
    {
        max_c = max(max_c, it.second);
    }
    cout << max_c << endl;
    return 0;
}