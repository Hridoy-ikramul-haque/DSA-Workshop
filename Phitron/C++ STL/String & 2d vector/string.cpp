// https://docs.google.com/document/d/1WqBUKqbU7ayYpm1sWZlWcYtJe6IfogLyc5-KGiQPOj8/edit?tab=t.0
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    // cin >> s;
    for (int i = 0; i < n; i++)
    {
        // cin >> s[i];
        char p;
        cin >> p;
        s.push_back(p);
    }
    cout << s << '\n';
    s.pop_back();
    cout << s << '\n';
    char p = s.front();
    cout << p << '\n';
    string x = "ikramukl";
    cout << x.empty() << endl;
    cout << x.substr(1, 3) << endl;

    return 0;
}