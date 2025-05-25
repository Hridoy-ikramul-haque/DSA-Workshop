#include <bits/stdc++.h>
using namespace std;

bool dp[21][21][41];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    for (int x = 0; x <= 20; x++) {
        for (int y = 0; y <= 20; y++) {
            for (int last = 40; last >= 0; --last) {
                bool canWin = false;
                for (int take = last + 1; take <= x; ++take) {
                    if (!dp[x - take][y][take])
                        canWin = true;
                }
                for (int take = last + 1; take <= y; ++take) {
                    if (!dp[x][y - take][take])
                        canWin = true;
                }
                dp[x][y][last] = canWin;
            }
        }
    }

    int T;
    cin >> T;
    while (T--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        bool found = false;
        for (int first = 1; first <= K; ++first) {
            if (first <= X && !dp[X - first][Y][first]) {
                found = true;
                break;
            }
            if (first <= Y && !dp[X][Y - first][first]) {
                found = true;
                break;
            }
        }
        cout << (found ? "Alice" : "Bob") << '\n';
    }

    return 0;
}
