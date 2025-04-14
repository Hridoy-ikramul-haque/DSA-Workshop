#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int l = s.size();
    vector<int> freq(26, 0);
    for (auto p : s)
    {
        freq[p - 'a']++;
    }
    for (int x = 0; x < 26; x++)
    {
        if (freq[x] > 0)
        {
            cout << char(x + 'a') << ":" << freq[x] << endl;
        }
    }

    return 0;
}