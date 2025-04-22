// https://codeforces.com/problemset/problem/4/C

// steps:
// 1. create a map
// 2. take every string and check if it's exists on map .
// 2.1 -> if no print OK and add freq[word]++.
// 2.2- else if exists , print WORD + FREQ[WORD]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    map<string, int> mp;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK" << endl;
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }

    return 0;
}
