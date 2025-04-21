

// https://codeforces.com/contest/1722/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int col;
        cin >> col;
        // 2d vector for store data
        vector<vector<string>> inputs(3, vector<string>(col));
        map<string, int> freq;

        // store data
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> inputs[i][j];

                // count every string occurance
                freq[inputs[i][j]]++;
            }
        }

        // store results
        vector<int> count(3, 0);

        // loop every word and store results in count arr.
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < col; j++)
            {
                string word = inputs[i][j];
                if (freq[word] == 2)
                {
                    count[i] += 1;
                }
                else if (freq[word] == 1)
                {
                    count[i] += 3;
                }
            }
        }

        cout << count[0] << "  " << count[1] << "  " << count[2] << endl;
    }

    return 0;
}