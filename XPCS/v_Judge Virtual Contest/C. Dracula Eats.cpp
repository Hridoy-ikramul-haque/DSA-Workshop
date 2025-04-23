#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int count = (N >= 2) ? (N - 2) / 7 + 1 : 0; // 2,9,16
        cout << count << endl;
    }

    return 0;
}
