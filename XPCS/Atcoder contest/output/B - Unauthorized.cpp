#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<string> s1(x, "");
    for (int i = 0; i < x; i++)
    {
        cin >> s1[i];
    }
    int e_count = 0;
    bool logs = false;
    for (int i = 0; i < x; i++)
    {
        if (s1[i] == "login")
        {
            logs = true;
        }
        else if (s1[i] == "logout")
        {
            logs = false;
        }
        if (s1[i] == "private")
        {
            if (!logs)
                e_count++;
        }
    }
    cout << e_count << endl;
    return 0;
}

// 3 , expect 1