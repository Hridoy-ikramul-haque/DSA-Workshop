#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S, T;
        cin >> S >> T;

        vector<int> arr;
        for (int i = 0; i < N - 1; ++i)
        {
            if (S[i + 1] != T[i + 1])
            {
                if (S[i] == '1')
                {
                    arr.push_back(i + 1);
                    S[i + 1] = (S[i + 1] == '0') ? '1' : '0';
                }
                else
                {
                    int j = i - 1;
                    while (j >= 0 && S[j] != '1')
                    {
                        j--;
                    }

                    if (j < 0)
                    {
                        arr.clear();
                        arr.push_back(-1);
                        break;
                    }
                    for (int k = j; k < i; k++)
                    {
                        arr.push_back(k + 1);
                        S[k + 1] = (S[k + 1] == '0') ? '1' : '0';
                        swap(S[k], S[k + 1]);
                    }
                    arr.push_back(i + 1);
                    S[i + 1] = (S[i + 1] == '0') ? '1' : '0';
                }
            }
        }

        if (S == T)
        {
            cout << arr.size() << '\n';
            for (int x : arr)
                cout << x << ' ';
            if (!arr.empty())
                cout << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}
