#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Flush newline

    while (t--) {
        string s;
        getline(cin, s);

        string res = "";

        for (char ch : s) {
            if (ch == 'b') {
                // remove last lowercase letter if exists
                for (int i = res.size() - 1; i >= 0; i--) {
                    if (islower(res[i])) {
                        res.erase(res.begin() + i);
                        break;
                    }
                }
            }
            else if (ch == 'B') {
                // remove last uppercase letter if exists
                for (int i = res.size() - 1; i >= 0; i--) {
                    if (isupper(res[i])) {
                        res.erase(res.begin() + i);
                        break;
                    }
                }
            }
            else {
                res += ch;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
