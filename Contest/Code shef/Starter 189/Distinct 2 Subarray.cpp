#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        int ans = N + 1;
        for (int i = 0; i < N; ++i) {
            vector<int> freq(101, 0);
            int distinct = 0;
            for (int j = i; j < N; ++j) {
                if (freq[A[j]] == 0) distinct++;
                freq[A[j]]++;
                if (distinct > 2) break;
                if (distinct == 2)
                    ans = min(ans, j - i + 1);
            }
        }

        if (ans == N + 1)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}