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
        string s;
        cin >> n >> s;

        int f_one = 0;

        for (int i = 0; i < n; ++i)
        {
            string temp = s;
            temp[i] = (temp[i] == '1' ? '0' : '1');
            f_one += count(temp.begin(), temp.end(), '1');
        }

        cout << f_one << '\n';
    }

    return 0;
}
