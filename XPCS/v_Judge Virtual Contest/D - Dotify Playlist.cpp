#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // 4

    while (T--)
    {
        int N, K, L; // 3 1 2
        cin >> N >> K >> L;

        vector<int> lengths;

        for (int i = 0; i < N; ++i)
        { // N= 3
            int M, Li;
            cin >> M >> Li;
            if (Li == L)
            {                         //
                lengths.push_back(M); // 5 7
            }
        }

        if (lengths.size() < K)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(lengths.rbegin(), lengths.rend()); // sort in descending order
            int total = 0;
            for (int i = 0; i < K; ++i)
            { // 1
                total += lengths[i];
            }
            cout << total << endl;
        }
    }

    return 0;
}
