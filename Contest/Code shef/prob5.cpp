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
        int N;
        cin >> N;
        string S, T;
        cin >> S >> T;
        vector<int> ops;

        for (int i = N - 1; i >= 0; --i)
        {
            if (S[i] != T[i])
            {
                if (S[0] != T[0])
                {
                    ops.push_back(1);
                    S[0] = (S[0] == '0' ? '1' : '0');
                }

                for (int j = i; j > 0; --j)
                {
                    ops.push_back(j);
                    swap(S[j], S[j - 1]);
                    S[j - 1] = (S[j - 1] == '0' ? '1' : '0');
                }
            }
        }
        if (S == T)
        {
            cout << ops.size() << '\n';
            for (int x : ops)
                cout << x << ' ';
            cout << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}
