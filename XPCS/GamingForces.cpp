#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count;
    int c_1 = 0;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        count = l;
        // vector<int> arr(l);
        for (int i = 0; i < l; i++)
        {
            cin >> i;
            if (i == 1)
            {
                c_1++;
                if (c_1 % 2 == 0)
                {
                    count--;
                }
            }
        }
        cout << count << endl;
        c_1 = 0;
    }

    return 0;
}

// 1 1 1 2 1 1 - 6 1 1 - 1 1 1 - 1 1 - 1 2 - 1
// 1 2 -