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
        int count;
        cin >> count;

        vector<int> a(count);
        for (int i = 0; i < count; i++)
        {
            cin >> a[i];
        }
        // vector<int> freq(count + 1);
        // for (int y : a)
        // {
        //     freq[y]++;
        // }
        // int pre = 0;
        // for (auto p : freq)
        // {
        //     if (p > 1)
        //     {
        //         pre += p;
        //     }
        //     // cout << p << endl;
        // }
        // if (pre == 0)
        // {
        //     cout << pre << endl;
        // }
        // else
        // {
        //     cout << pre - 1 << endl;
        // }

        set<int> pq;
        int ans = count;
        for (int i = count - 1; i >= 0; i--)
        {
            if (pq.count(a[i]))
            {
                break;
            }
            pq.insert(a[i]);
            ans--;
        }
        cout << ans << endl;
    }

    return 0;
}

// 8
// 7 8 2 2 6 2 6 6
// 7 6
