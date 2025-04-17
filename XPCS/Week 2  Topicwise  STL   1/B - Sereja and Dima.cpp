// https://codeforces.com/problemset/problem/381/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool turn = true; // true for Sereja, false for Dima

    while (left <= right)
    {
        int chosen;
        if (cards[left] > cards[right])
        {
            chosen = cards[left];
            left++;
        }
        else
        {
            chosen = cards[right];
            right--;
        }

        if (turn)
        {
            sereja += chosen;
        }
        else
        {
            dima += chosen;
        }

        turn = !turn; // switch turn
    }

    cout << sereja << " " << dima << endl;

    return 0;
}