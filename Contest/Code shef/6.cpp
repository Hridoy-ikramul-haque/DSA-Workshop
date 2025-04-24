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
        vector<int> P(N);

        for (int i = 0; i < N; i++)
        {
            cin >> P[i];
        }

        bool sorted = true;
        for (int i = 0; i < N; i++)
        {
            if (P[i] != i + 1)
            {
                sorted = false;
                break;
            }
        }
        if (sorted)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
