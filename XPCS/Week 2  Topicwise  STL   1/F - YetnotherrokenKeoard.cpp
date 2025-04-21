#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore(); // newline handle

    while (t--)
    {
        string s;
        getline(cin, s);

        int low = 0, up = 0;
        string res;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (ch == 'b')
            {
                low++;
            }
            else if (ch == 'B')
            {
                up++;
            }
            else if (islower(ch))
            {
                if (low > 0)
                    low--;
                else
                    res += ch;
            }
            else if (isupper(ch))
            {
                if (up > 0)
                    up--;
                else
                    res += ch;
            }
        }

        reverse(res.begin(), res.end());
        cout << res << '\n';
    }

    return 0;
}
