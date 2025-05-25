#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;
        int total = N * M;

        int maxAlice = 0;

        // Try all horizontal cuts
        for (int i = 1; i < N; ++i) {
            int part1 = i * M;
            int part2 = (N - i) * M;
            if (part1 >= K) maxAlice = max(maxAlice, part2);
            if (part2 >= K) maxAlice = max(maxAlice, part1);
        }

        // Try all vertical cuts
        for (int j = 1; j < M; ++j) {
            int part1 = j * N;
            int part2 = (M - j) * N;
            if (part1 >= K) maxAlice = max(maxAlice, part2);
            if (part2 >= K) maxAlice = max(maxAlice, part1);
        }

        // Try giving Bob the full bar if he needs more than any piece
        if (total >= K)
            maxAlice = max(maxAlice, total - K);

        cout << maxAlice << '\n';
    }
    return 0;
}
