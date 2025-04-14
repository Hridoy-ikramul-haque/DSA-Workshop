#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    string str;
    cin >> str;
    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str[i] == 'o')
        {
            if (str[i + 1] = '?')
            {
                str[i + 1] = '.';
            }
        }
    }
    cout << str << endl;
    return 0;
}

// 3 , expect 1