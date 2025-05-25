#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            P[i] = i + 1;
        }

        if (X <= N) {
            // Swap P[0] and P[X-1]
            swap(P[0], P[X - 1]);
        }

        for (int i = 0; i < N; i++) {
            cout << P[i] << (i == N - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
