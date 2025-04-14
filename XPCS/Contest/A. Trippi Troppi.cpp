#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, result;
        getline(cin, s);
        bool sp = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (sp && s[i] != ' ')
            {
                result.push_back(s[i]);
                sp = false;
            }
            if (s[i] == ' ')
            {
                sp = true;
            }
        }
        cout << result << endl;
        s.clear();
        result.clear();
    }

    return 0;
}