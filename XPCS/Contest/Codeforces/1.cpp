#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum % 3 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            int x = sum / 3;
            if (x >= c)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
