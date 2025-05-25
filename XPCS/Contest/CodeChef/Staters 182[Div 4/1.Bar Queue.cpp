// https://www.codechef.com/problems/QBGI
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
        cin >> n;
        string s;
        cin >> s;
        int c_g = 0, c_b = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                c_b++;
                count++;
            }
            else
            {
                c_g++;
                count++;
            }
            if (c_b > 2 * c_g)
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}