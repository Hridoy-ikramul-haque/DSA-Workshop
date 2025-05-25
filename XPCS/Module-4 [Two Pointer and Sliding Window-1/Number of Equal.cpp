//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l1, l2;
    cin >> l1 >> l2;

    vector<int> a1(l1), a2(l2);
    unordered_map<int, int> result;

    for (int i = 0; i < l1; i++) {
        cin >> a1[i];
        result[a1[i]]++;
    }

    for (int i = 0; i < l2; i++) {
        cin >> a2[i];
    }

    int final = 0;
    for (auto x : a2) {
        final += result[x];
    }

    cout << final;
    return 0;
}
