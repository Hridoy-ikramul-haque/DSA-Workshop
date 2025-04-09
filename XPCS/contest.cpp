#include <iostream>
#include <unordered_set>
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
        vector<int> A(N);
        unordered_set<int> arr;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            arr.insert(A[i]);
        }

        bool finds = false;
        for (int i = 0; i < N && !finds; i++)
        {
            for (int j = i; j < N && !finds; j++)
            {
                int sum = A[i] + A[j];

                if (arr.find(sum) == arr.end())
                {
                    cout << A[i] << " " << A[j] << endl;
                    finds = true;
                    break;
                }
            }
            if (finds)
                break;
        }
        if (!finds)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
