#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long a = N;
        long long b = N - 1;
        long long c = N - 2;
        while (c >= 1)
        {
            if (b + c > a)
            {
                cout << (a + b + c) << endl;
                break;
            }
            a--;
            b--;
            c--;
        }

        if (c < 1)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}