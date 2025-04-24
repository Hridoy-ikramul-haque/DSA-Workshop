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

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int count = 0;

        for (int x = 1; x <= 100; x++)
        {
            bool sm = false;
            bool lg = false;

            for (int i = 0; i < N; i++)
            {
                if (A[i] < x)
                    sm = true;
                if (A[i] > x)
                    lg = true;
            }

            if (sm && lg)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}