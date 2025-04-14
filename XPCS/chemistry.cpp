#include <bits/stdc++.h>
using namespace std;

bool canFormPalindrome(string &s, int k)
{
    vector<int> freq(26, 0);
    for (char c : s)
        freq[c - 'a']++;

    int oddCount = 0;
    for (int f : freq)
        if (f % 2 != 0)
            oddCount++;

        return oddCount - k <= 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        cout << (canFormPalindrome(s, k) ? "YES" : "NO") << '\n';
    }
    return 0;
}
